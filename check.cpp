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
    int n ; 
    cin>> n ; 
    
    pair<int,int> most = helper(s , 0 , n) ; 
    if(s[most.one] == 0) {
        pair<int,int> left = helper2(s , 0 , most.one , 0) ;  
        pair<int,int> right = helper2(s , 0 , most.one + most.second, 0) ;  
        reverse(left.second > )
    }
    else {

    }

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