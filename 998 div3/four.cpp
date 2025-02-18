#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n; 
        vector<int> arr(n); 
        for (int i = 0; i < n; i++) 
            cin >> arr[i]; 
        
        for (int i = 0; i < n - 1; i++) {
             int mini = min(arr[i], arr[i + 1]); 
            arr[i] -= mini ;
            arr[i+1] -= mini ; 
        }
        
        bool isSorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                isSorted = false;
                break;
            }
        }
        
        if (isSorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl; 
    }

    return 0; 
}
