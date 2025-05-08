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
     typedef long long ll ; 
    int n  ; 
      cin>> n ; 
     vector<vector<int>> grid (n , vector<int>(n)) ; 
     rep(i , 0 , n) {
        rep(j , 0 , n) {
            cin >> grid[i][j] ; 
        }
     }
     // apply logic 
     vector<int> permutaion(2*n + 1 , 0)  ; 
     rep(i , 0 , n) {
        rep(j , 0 , n) {
            permutaion[i+1 + j + 1] = grid[i][j] ;  
        }
     }
     // find missing 
     // one will be missing 
     ll sum = accumulate(permutaion.begin() , permutaion.end() , 0) ;
     permutaion[1] = ((2*n) * (2*n + 1)) / 2  - sum; 
     
     rep(i , 1 , 2*n + 1) {
         cout<<permutaion[i]<<" " ;
     }
     cout<<endl ; 

    
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