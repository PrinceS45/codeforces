#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)



const long long MOD = 1e9 + 7;
const double PI = acos(-1);


int DiceCombination(int n) {
    vector<int> dp(n + 1);
    // Base case
    dp[0] = 1;

    // Iterate through all sums from 1 to n
    for (int i = 1; i <= n; i++) { // Fix: Changed `i < n` to `i <= n`
        for (int j = 1; j <= 6; j++) {
            if (j <= i) {
                dp[i] = (dp[i] + dp[i - j]) % MOD; // Use global MOD
            }
        }
    }
    return dp[n];
}


void solve() {
    int n;
    cin >> n;
    cout<<DiceCombination(n) ; 
}

int main() {
      solve() ; 

      return 0 ; 
}