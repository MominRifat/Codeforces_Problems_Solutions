//Created by Momin_Rifat
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    cin >> tc;
    while(tc--) 
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) 
        {
            scanf("%d", &arr[i]);
        }
        
        int counts[101] = {0};
        
        for(int i = 0; i < n; i++) 
        {
            counts[arr[i]]++;
        }

        int ans = 0;
        
        for(int length = 1; length <= 100; length++) 
            {
                if(counts[length] >= 3) 
                {
                    ans += counts[length] / 3;
                }
            }

        cout << ans << endl;
    }
    return 0;
}