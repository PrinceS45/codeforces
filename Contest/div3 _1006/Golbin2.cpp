#include <bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>

int main() {
    int t ; 
    cin >> t ; 
    while(t--) {
         int n ; 
         cin>> n ; 
         string s ; 
         cin>> s ; 
         long long sub = 0 , das = 0 ; 
         for(char ch : s) {
            if(ch == '-') sub++ ; 
            else if(ch == '_') das++ ; 
         }
       if(sub < 2 || das < 1 ) {
          cout<<"0"<<endl ; 
          continue ; 
       }
        long long x = sub / 2 ; 
        long long y = sub - x ; 
        long long  z = das ; 

        cout<<x*y*z<<endl ;    
          
    }
    return 0 ; 
}