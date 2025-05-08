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
    cin >> n >> x;
   vector<int> nums(n) ; 
   rep(i , 0 , n) {
      cin>>nums[i] ; 
   }
   // solve 
   vector<int> dp(x+1 , 0) ; 
   // base case 
     dp[0] = 1 ; 
     for(int i = 1 ; i < x+1 ; i++) {
         for(int j = 0 ; j < n ; j++) {
               if(nums[j] <= i) {
                 dp[i]  = (dp[i]  + dp[i - nums[j]]) % MOD ; 
               }
         }
     }
      cout<<dp[x] ;     
   
}

int main() {
    
        solve();
   
}