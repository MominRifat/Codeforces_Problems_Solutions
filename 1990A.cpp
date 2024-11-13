#include <bits/stdc++.h>
using namespace std;
const int N = 55;

int n;
int q[N];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        q[i] = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        ++q[x];
    }

    for (int i = 1; i <= n; ++i)
    {
        if (q[i] % 2 == 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}