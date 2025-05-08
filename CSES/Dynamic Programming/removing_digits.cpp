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
     vector<int> dp(n+1 , 1e9)  ; 
      dp[0] =  0 ; 
      
        for(int i = 1 ; i <= n ; i++) {
                 string temp = to_string(i) ;
                 for(int j =0 ; j < temp.size() ; j++) {
                 int digit = temp[j] - '0' ; 
                     if(digit <= i) {
                         dp[i] = min(dp[i] ,1 + dp[i - digit]) ; 
                     }
                    }    
        }
        cout<<dp[n] << endl ; 

}

int main() {
    fast_io();
    // int t = 1;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0 ; 
}