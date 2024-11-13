// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        string num;
        cin >> num;
        num[0] = num[0] - '0';
        num[1] = num[1] - '0';
        int sum = num[0] + num[1];
        cout << sum << endl;
    }
    return 0;
}