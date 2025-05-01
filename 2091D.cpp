#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long int n, m, k;
    cin >> n >> m >> k;
    long long int L = (k + n - 1) / n; 
    if (L <= m) {
        cout << L << endl;
    } else {
        cout << m << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1; 
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}