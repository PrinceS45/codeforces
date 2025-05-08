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
   vector<vector<int>> dp(n+1  , vector<int> (x+1 , 0)) ; 
   // base case 
     for(int i =0 ; i < n ; i++) {
         dp[i][0] = 1 ; 
     }

     for(int i = n-1 ; i >= 0 ; i--) {
         for(int j = 1 ; j <= x ; j++) {
                int skip = dp[i+1][j] ; 
                int notSkip =0 ; 
                if(nums[i] <= j ) notSkip = dp[i][j-nums[i]] ;
                dp[i][j] = (skip + notSkip) % MOD ;  
         }
     }
      cout<<dp[0][x] ;     
   
}

int main() {
    
        solve();
   
}