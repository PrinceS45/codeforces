#include <bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>

int main() {
      int t ; 
      cin>>t ; 
      while (t)
      {
          string w ; 
          cin>>w ; 
          string ans ; 
           int n = w.size() ; 
           ans += w.substr(0 , n-2 ) ; 
          ans += 'i' ; 
          cout<<ans<<endl ; 
      }
      

    return 0;
}