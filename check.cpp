#include <bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>
bool isPrime(int n  ) {
     for(int i= 2 ; i * i <= n ; i++ ) {
         if(n % i == 0  )return false  ; 
     }
     return true   ; 
}
int main() {
   
     int n ; cin >> n   ; 
       
      for(int i = 3 ; i < n  ; i++  ) {
         if(i + 2 == n && isPrime(i)) {
            cout<<"2" <<" " << i <<endl ; 
             return 0 ; 
         }
      }
           cout<<"-1"<<endl ; 
    return 0;
}