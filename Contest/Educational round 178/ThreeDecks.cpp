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
   cin>>n ; 
   char ch ; 
   vector<int> a , b ; 
    bool al = false , bb = false ; 
   for(int i = 0 ; i < n ; i++) {
        cin>>ch ; 
        if(ch == 'A') a.push_back(i+1) ; 
        else b.push_back(i+1) ; 
        if(i == 0 && ch == 'A') al = true ;  
        if(i == 0 && ch == 'B') bb = true ;  
   }
   bool Alice = false , Bob = false ; 
   int maxA = *max_element(a.begin() , a.end()) ; 
   int maxB = *max_element(b.begin() , b.end()) ; 
   if(maxA > maxB) Alice = true ;
   else Bob = true ; 

       if(al && b.size() == 1 && b.back() == n) {
            Alice = true ; Bob = false ; 
       }
       if(bb && a.size() == 1 && a.back() == n) {
           Bob = true ; 
           Alice = false ; 
       }
        
//        if(al) {
//         if (std::binary_search(a.begin(), a.end(), n-1))
//         Alice = true ; Bob = false ; 
//    }
       if(bb) {
        if (std::binary_search(b.begin(), b.end(), n-1))
        Alice = false ; Bob = true ; 
   }
  
     if(Alice ) cout<<"Alice" ; 
     else cout<<"Bob" ; 
     cout<<endl ; 

}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        solve()  ;
    }
    return 0 ; 
}