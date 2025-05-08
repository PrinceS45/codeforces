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
    cin>> n >> x ; 
    vector<int> v (n ) ; 
    rep(i , 0 , n) {
        cin>>v[i] ; 
    }
    vector<long long> dp(x+1 , 1e9) ; 
    // base case 
    dp[0] = 0  ; 
    rep(i , 0 , x+1) {
        rep(j , 0 , n) {
            if(v[j] <= i) {
                dp[i] = min(dp[i] , dp[i- v[j]] + 1) ; 
            }
        }
    }
    cout << (dp[x] == 1e9 ? -1 : dp[x]);
}

int main() {
    fast_io();
   // int t = 1;
   // cin >> t;
    //while (t--) {
        solve();
    //}
    return 0 ; 
}