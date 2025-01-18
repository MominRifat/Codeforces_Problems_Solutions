#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        long long oddsum = 0;
        long long evensum = 0;
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0)
            {
                oddsum += arr[i];
                odd++;
            }
            else
            {
                evensum += arr[i];
                even++;
            }
        }
        if (odd == 0 || even == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        long long o_average = oddsum / odd;
        long long e_average = evensum / even;
        if ((oddsum % odd == 0) && (evensum % even == 0) && o_average == e_average)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
