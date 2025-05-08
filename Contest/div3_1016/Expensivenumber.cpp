#include <bits/stdc++.h>
using namespace std;
#include <string>


const long long MOD = 1e9 + 7;
const double PI = acos(-1);
bool isPrime(long long x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}
void solve() {
     long long x , k ; 
     cin >> x >> k ; 
      if(x > 1 &&  k > 1 )  cout<<"NO"<<endl ; 
    else if(x == 1  ) {
          string t ; 

        while(k--) {
              t += "1" ;    
        }
          long long y = stoll(t) ; 
          if(isPrime(y)) {
         cout<<"YES"<<endl ; 
          }
          else cout<<"NO" ; 
          cout<<endl ; 
         return ; 
     }
      else  {
           if(isPrime(x)) {
            cout<<"YES"<<endl ; 
           }
            else {
                 cout<<"No"<<endl ; 
            }
      }
      return; 

}

int main() {
   
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0 ; 
}