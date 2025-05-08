#include <bits/stdc++.h>
using namespace std;

#define int long long
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
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const int INF = 1e18;
const double PI = acos(-1);

// Power function with mod
int power(int a, int b, int m = MOD) {
    int res = 1;
    while (b) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// GCD & LCM
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

// Sieve of Eratosthenes (Prime numbers up to N)
vector<int> sieve(int n) {
    vector<int> prime(n + 1, 1), primes;
    prime[0] = prime[1] = 0;
    rep(i, 2, n + 1) {
        if (prime[i]) {
            primes.pb(i);
            for (int j = i * i; j <= n; j += i) prime[j] = 0;
        }
    }
    return primes;
}

// Binary Search
int bin_search(vi &arr, int x) {
    int l = 0, r = arr.size() - 1, mid;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

// Dijkstra’s Algorithm (Shortest Path)
vector<int> dijkstra(int n, vector<vector<pii>> &adj, int src) {
    vector<int> dist(n, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, src});
    dist[src] = 0;

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;

        for (pii edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n) cin >> arr[i];
    sort(all(arr));
     int ans = 1 ; 
     for(int i = 0 ; i < n-1 ; i++) {
         if(arr[i] != arr[i+1]) ans++ ; 
     }
     cout<<ans ; 


    cout << endl;
}

signed main() {
    fast_io();
    int t = 1;
    cin >> t;
   // while (t--) {
        solve();
   // }
}