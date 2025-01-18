#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int n;
        cin >> n;
        if(n % 2 == 0)
        {
            cout << "2 " << n - 3 << " " << "1" << endl;
        }
        if(n % 4 == 1)
        {
            cout << n/2 - 1 << " " << n/2 + 1 << " " << "1" << endl;
        }
        if(n % 4 == 3)
        {
            cout << n/2 - 2 << " " << n/2 + 2 << " " << "1" << endl;
        }
    }
    return 0;
}