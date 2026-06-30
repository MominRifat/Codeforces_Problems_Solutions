#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<vector<int>> dp(n + 1, vector<int>(3, 0));

    dp[n][0] = 1;

    for (int pos = n - 1; pos >= 0; pos--)
    {
        vector<int> dig;

        if (s[pos] == '*')
        {
            int st = 0;

            if (pos == 0 && n > 1)
                st = 1;

            for (int d = st; d <= 9; d++)
            {
                if (pos == n - 1 && d % 2)
                    continue;
                dig.push_back(d);
            }
        }
        else
        {
            int d = s[pos] - '0';

            if (pos == n - 1 && d % 2)
            {
                cout << -1 << '\n';
                return;
            }

            dig.push_back(d);
        }

        for (int d : dig)
        {
            for (int r = 0; r < 3; r++)
            {
                if (dp[pos + 1][r])
                {
                    dp[pos][(d + r) % 3] = 1;
                }
            }
        }
    }

    if (!dp[0][0])
    {
        cout << -1 << '\n';
        return;
    }

    string ans = "";

    int pref = 0;

    for (int pos = 0; pos < n; pos++)
    {
        vector<int> dig;

        if (s[pos] == '*')
        {
            int st = 0;

            if (pos == 0 && n > 1)
                st = 1;

            for (int d = st; d <= 9; d++)
            {
                if (pos == n - 1 && d % 2)
                    continue;
                dig.push_back(d);
            }
        }
        else
        {
            dig.push_back(s[pos] - '0');
        }

        sort(dig.begin(), dig.end());

        for (int d : dig)
        {
            int np = (pref + d) % 3;

            int need = (3 - np) % 3;

            if (dp[pos + 1][need])
            {
                ans.push_back(char('0' + d));
                pref = np;
                break;
            }
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}