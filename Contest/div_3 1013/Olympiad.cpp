#include <bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>
/* problem - The final of the first Olympiad by IT Campus "NEIMARK" is scheduled for March 1, 2025. A nameless intern was tasked with forming the date of the Olympiad using digits — 01.03.2025.

To accomplish this, the intern took a large bag of digits and began drawing them one by one. In total, he drew n
digits — the digit ai
was drawn in the i
-th turn.

You suspect that the intern did extra work. Determine at which step the intern could have first assembled the digits to form the date of the Olympiad (the separating dots can be ignored), or report that it is impossible to form this date from the drawn digits. Note that leading zeros must be displayed.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
(1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
(1≤n≤20
).

The second line of each test case contains n
integers ai
(0≤ai≤9
) — the numbers that the intern pulled out in chronological order.

Output
For each test case, output the minimum number of digits that the intern could pull out. If all the digits cannot be used to make a date, output the number 0
 
*/

int main() {
   
      int t ; 
      cin>>t ; 
      while (t--)
      {
           int n ; 
           cin>> n ; 
           vector<int> nums ; 
           for(int i = 0 ; i < n ; i++ ) {
                int temp ; cin>>temp ; 
                nums.push_back(temp) ;
           } 
           unordered_map<int,int> mp = {{0 , 3}, {1 , 1} , {2 , 2} ,{3 , 1} ,{ 5 , 1}} ; 
            int res = 0 ; 
           for(int i = 0 ; i < n  ; i++) {
              if(mp.count(nums[i])) {
                  mp[nums[i]]-- ; 
                  if(mp[nums[i]] == 0) {
                      mp.erase(nums[i]) ; 
                  }
                   
              }
             if(mp.empty()) {
                 res = i ; break ; 
             }
        }
         if(mp.size() == 0) cout<<res+1<<endl ; 
         else cout<<0<<endl ; 
      }
      

    return 0;
}