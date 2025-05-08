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
    int n , m  ; 
    cin>>n>> m ; 
    vector<int> arr(n) ; 
    for(int i = 0  ; i < n  ; i++) cin>>arr[i] ; 
    // apply dynamic programming 
    vector<vector<int>> dp(n , vector<int> (m+1 , 0)) ; 
    // base case
    for(int i = 1 ; i <= m ; i++) {
        if(arr[0] == 0 || arr[0] == i) {
            dp[0][i] = 1 ; 
        }
    }
// apply tabulation apprpoach 
  
for(int i = 1 ; i < n ; i++) {
    for(int j = 1 ; j <= m ; j++) {
         if(arr[i] != 0 && arr[i] != j) {
            dp[i][j] = 0 ; 
            continue ; 
         }
         else {
            for(int prev = j-1 ; prev <= j+1 ; prev++) {
                if(prev < 1 || prev > m) continue ; 
                dp[i][j] = (dp[i][j] + dp[i-1][prev] )% MOD ; 
            }
         }
    }
}
   long long ans = 0 ; 
   for(int i = 1 ; i <= m ; i++) {
    ans = (dp[n-1][i] + ans) % MOD  ; 
   }
   cout<< ans<<endl ; 

}

int main() {
    fast_io();
    // int t = 1;
    // cin >> t;
   // while (t--) {
        solve();
    //}
    return 0 ; 
}