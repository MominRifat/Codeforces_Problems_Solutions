// Created By Momin_Rifat
#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n, m;
        cin >> n >> m;
        char num[n][m];
        int count[n] = {0};
        for(int i = 0; i < n; i++) 
        {
            for(int j = 0; j < m; j++) 
            {
                cin >> num[i][j];
            }
        }

        int ans1, ans2;
        int maxCount = 0;
        for(int i = 0; i < n; i++) 
        {
            for(int j = 0; j < m; j++) 
            {
                if(num[i][j] == '#') 
                {
                    count[i]++;
                    if (count[i] > maxCount) 
                    {
                        maxCount = count[i];
                        ans1 = i + 1;
                    }
                }
            }
        }
        int sum = 0;
        for(int j = 0; j < m; j++) 
        {
            if(num[ans1 - 1][j] == '#') 
            {
                sum += j + 1;
            }
        }
        ans2 = (sum + maxCount - 1) / maxCount;
        cout << ans1 << " " << ans2 << endl;
    }

    return 0;
}