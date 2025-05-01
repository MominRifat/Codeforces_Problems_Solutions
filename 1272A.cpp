// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int a,b,c;
    cin >> a >> b >> c;
    long long int ans = INT_MAX;
    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            for(int k = -1; k <= 1; k++){
                ans = min(ans,(abs((a - i) - (b - j)) + abs((a - i) - (c - k)) + abs((c - k) - (b - j))));
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}