#include <bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>

int main() {
     
    int t ; 
    cin>>t ; 
    while (t--)
    {
        int n , k , p ; 
        cin>> n >> k >> p ;
        if(k <  0) k = k * -1 ; 

        int ans = k / p; 
        int mod  = k % p ; 
        if(mod != 0) ans ++ ; 

        if(ans > n ) cout<<"-1"<<endl ; 
        else cout<<ans<<endl ;
        
        
    }
    

    return 0 ; 
}