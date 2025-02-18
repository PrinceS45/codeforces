#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int count(vector<int> & arr , int target) {
     int n = arr.size() ; 
     int i = 0 , j = n-1 , ans = 0 ; 
     while(i < j) {
          int sum =  arr[i] + arr[j] ; 
          if(sum > target) {
              j-- ; 
          }
          else if(sum < target) {
              i++ ; 
          }
          else {
                ans++ ; 
                i++ ; 
                j-- ; 
          }
     }
       return ans ; 
}
int main() {
    int t ; cin>> t ; 
    while(t--) {
        int n , k ; 
        cin>> n >> k ; 
        vector<int> arr(n) ; 
        for(int i =0  ; i < n ; i++) {
            cin>> arr[i] ; 
        }
      sort(arr.begin() ,arr.end()) ; 
      cout<<count(arr , kw)<<endl  ;

    }
    return 0 ; 

}