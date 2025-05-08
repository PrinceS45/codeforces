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

// void solve() {
//     string p , s; 
//     cin>> p ; 
//     cin>> s  ; 
//     int n = p.size() , m = s.size() ;

//     //aply dynamic programming 
//     vector<vector<vector<bool>>> dp(n + 2 , vector<vector<bool>> (m + 1 , vector<bool>(2 , false))) ; 
//         dp[n+1][m][0] = true  ; 
//         dp[n+1][m][1] = true  ; 
//         dp[n+2][m][0] = true  ; 
//         dp[n+2][m][1] = true  ; 
        
//         for(int i = n-1 ; i >= 0 ; i--) {
//              for(int j = m- 1 ; j >= 0 ; j--) {
//                  for(int k = 0 ; k < 2 ; k++) {
//                     // 0 repereset not skip 1 represent skip 
//                     if(k == 0) {
//                          dp[i][j][k] = (dp[i+1][j+1][k] || dp[i+1][j+1][!k]) && s[i] == p[j] ; 
//                     }
//                     else {
//                         dp[i][j][k] =  (dp[i+1][j+1][k] || dp[i+1][j+1][!k]) ; 
//                     }
//                  }
//              }
//         }

//         if( dp[0][0][0] || dp[0][0][1] )
//           cout<<"YES" << endl ;
//         else
//           cout<<"NO" << endl ;
     
// }


void solve() {
    string p, s; 
    cin >> p >> s; 
    int n = p.size(), m = s.size();
   int i = 0 , k = 0 ; 
    while(i < n ) {
        int j  = i , count = 0 ; 
        while(j < n-1 && p[j] == p[j+1]) {
            count++ ; 
            j++ ; 
        }  
         j++  ; count++ ; 
         i = j ; 
         int q = k ; 
         while(q < m && s[q] == p[i-1]) q++ ;
         
         if(q - k  < count || q - k > count * 2) {
             cout<<"NO" <<endl ; 
              return  ; 
         } 
         k = q; 
    }
   if( k >= m)
    cout<<"YES"<<endl ; 
    else cout<<"NO"<<endl ;
}



int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0 ; 
}