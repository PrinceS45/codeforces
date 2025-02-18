#include<iostream>
using namespace std ; 
#include<bits/stdc++.h>
#include<algorithm>

int count(int arr[] , int x) {
        int ans = 0; 
        if(arr[0] + arr[1] == x) ans ++ ; 
        if(arr[1] + x == arr[2]) ans++ ; 
        if(x + arr[2] == arr[3]) ans++ ; 
        return ans ; 
}

int main() {

    int t ; 
    cin>> t  ; 
    while(t-- ) {
         int arr[4] ;
        for(int i = 0 ; i < 4 ; i++ ) {
            cin>>arr[i] ; 
        }
        int x = arr[0] + arr[1] , y = arr[3]-arr[2] ; 
        int ans = 0 ; 
        ans = max(ans , count(arr , x)) ; 
        ans = max(ans , count(arr,y)) ; 
        cout<<ans<<endl   ; 
    }
        return 0;
}