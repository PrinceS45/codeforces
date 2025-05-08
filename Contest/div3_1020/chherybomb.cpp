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
   int n , k  ; cin>> n >> k ; 
   vector<int> a(n) , b(n) ; 
   for(int i = 0 ; i < n ; i++) cin>> a[i]  ; 
   for(int i = 0 ; i < n ; i++) cin>> b[i]  ; 

     int x  = -1    ; bool flag = false ; 

     for(int i = 0 ; i < n ; i++) {
          if(b[i] != -1) {
            x = a[i] + b[i] ; 
            flag = true  ; 
            break ; 
          }
     }
     // check if another b[i] is given or not 
     for(int i = 0 ; i < n ; i++) {
        if(b[i] != -1 && b[i] + a[i] != x) return 0 ; 
        if(a[i] > x && x != -1) return 0 ; 
        if(x != -1 && x - a[i] > k) return 0 ; 

   }
     if(flag) return 1 ; 
    int mini = *min_element(a.begin() , a.end()) ; 
    int maxi = *max_element(a.begin() , a.end()) ; 
     int start = maxi - mini ; 
     return k - start +1 ; 

}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0 ; 
}