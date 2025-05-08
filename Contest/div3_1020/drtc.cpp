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

int solve() {
    int n;
    cin >> n;
     char s ; 
      int count1 = 0 , count0 = 0 ; 
     for(int i = 0 ;  i < n ; i++) {
            cin>>s ; 
            if(s== '1') count1++ ; 
            else count0++ ; 
     }
     return (count0 + (count0 * count1) + (count1 * (count1-1))) ; 
}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
       cout<< solve();
       cout<<endl ; 
    }
    return 0 ; 
}