#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
            sort(grid[i].begin(),grid[i].end());    
            
                }
        

        vector<pair<int,int>> arr(n);
        for(int i =0 ; i < n ; i++) {
            arr[i] = {grid[i][0] , i } ; 
        }
        sort(arr.begin() , arr.end()) ; 
        int prev = -1 ; 
       bool flag = true ; 
       for(int j = 0 ; j < m ; j++) {
          for(int i = 0 ; i < n ; i++) {
              if(grid[arr[i].second][j] < prev) {
                    flag = false ; 
                     break ; 
              }
              else {
                prev = grid[arr[i].second][j] ; 
              }
          }
           if(!flag) break;
       }
    
      if(!flag) {
         cout<<"-1"; 
      }
    else 
      for(int i = 0 ; i < n ; i++) {
        cout<<arr[i].second + 1<<" " ; 
      }

      cout<<endl;
            
    }

    return 0;
}
