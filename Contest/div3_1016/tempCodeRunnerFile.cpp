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
    long long n;
    cin >> n;
    
     string t = to_string(n) ; 
     int i = t.size()-1 ; 
     long long sub = 0 ; 
      while(i >= 0 && t[i] == '0') {
            sub++ ; 
            i--   ;
      } 
      int j =0 ; 
        while(j < i) {
             if(t[j] != '0') sub++ ; 
             j++ ; 
        }
       cout<<sub  ; 
    cout << endl;
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