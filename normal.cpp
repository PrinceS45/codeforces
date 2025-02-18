#include <iostream>
#include <vector>
#include<queue> 
#include<algorithm>
using namespace std;

int main() {
  int t ; 
  cin >> t; 
  while(t--)  {
      int n ; 
      cin >> n ; 
      string s; 
      cin >> s; 
    int ans = n  ; 
    int c = 0 ;
    for(int i = 0 ; i < n ; i++) {
      c++ ; 
      if(s[i] == '1') {
           ans = max(ans , (i+1) * 2 ) ; 
           c++ ; 
      }
    }
               ans = max(ans ,c ) ; 

       reverse(s.begin() , s.end()) ; 
           c = 0 ;
    for(int i = 0 ; i < n ; i++) {
      c++ ; 
      if(s[i] == '1') {
           ans = max(ans , (i+1) * 2 ) ; 
           c++ ; 
      }
    }
       cout<<ans <<endl ; 
  }
}
