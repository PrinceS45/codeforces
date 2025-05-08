#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

const long long MOD = 1e9 + 7;
const double PI = acos(-1);

void solve() {
    int n , x ; 
    cin>> n >> x; 
    vector<int> price(n) , pages(n) ; 
    for(int i = 0 ; i < n ; i++) {
        cin>> price[i]  ; 
    }
    for(int i = 0 ; i < n ; i++) {
        cin>> pages[i]  ; 
    }
// apply dynamic programming 
vector<vector<int>> dp(n + 1 , vector<int> (x + 1 , 0)) ; 
// base cas i == 0then 0 

for(int i = 1 ; i <= n ; i++) {
     for(int k = 0 ; k <= x; k++) {
        int pick = 0 ; 
        if(price[i-1] <= k) {
            pick = dp[i-1][k- price[i-1]] + pages[i-1]; 
        }
         int nPick = dp[i-1][k]  ;
         dp[i][k] = max(pick , nPick) ; 
     }
}
cout<<dp[n][x] ; 



}

int main() {
    fast_io();
  
  //  while (t--) {
        solve();
  //  }
    return 0 ; 
}