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
#define long long int
const double PI = acos(-1);

void solve() {
    int n;
    cin >> n;
   vector<vector<char>> grid( n , vector<char> ( n )) ; 
      for(int i  = 0 ; i < n ; i++) {
           for(int j  = 0 ; j < n ; j++) cin>>grid[i][j] ; 
      }

      // apply concept here 

      vector<vector<int>> dp( n , vector<int> (n , 0)) ; 
      // base case 
      dp[n-1][n-1] = 1 ; 
         for(int i = n-1 ; i >= 0 ; i--) {
               for(int j = n-1 ; j >= 0 ; j--) {
                     if(grid[i][j] == '*') {
                         dp[i][j] = 0 ; 
                          continue; 
                     }
                      if(i == n-1 && j == n-1 ) continue ; 
                     else {
                         int ans1 = i + 1 < n ? dp[i+1][j] : 0 ;  
                         int ans2 = j + 1 < n ? dp[i][j+1] : 0;
                         dp[i][j] = (ans1 + ans2) % MOD ;
                     }
               }
         }
           cout<<dp[0][0]<<endl ; 
    
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