#include <bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>

bool isPossible(long long n , long long  m , long long k , long long mid) {
   
    return (n * (mid*(m / (mid + 1)) + m % (mid + 1)) >= k);
   
}

int main() {
     int t  ; 
     cin>> t ; 
     while (t--)        
     {
        long long n , m , k ; 
        cin>> n>> m >> k ; 
        long long ans = m ; 
        long long s = 1 , e = m; 
         while(s < e) {
             long long mid =  (s + e) >> 1 ;
             if(isPossible(n , m , k , mid) ) {  
                    e = mid ; 
             }
             else s = mid+1 ; 
         }
         cout<<s<<endl ; 
   
        //  typedef long long ll;
        // ll n, m, k;
        // cin >> n >> m >> k;
        // ll low = 1, high = m;
        // while (low < high)
        // {
        //     ll mid = (low + high) / 2;
        //     if (n * (mid*(m / (mid + 1)) + m % (mid + 1)) >= k)
        //     {
        //         high = mid;
        //     }
        //     else
        //     {
        //         low = mid + 1;
        //     }
        // }
        // cout << low << endl;
     }
     
    return 0;
}