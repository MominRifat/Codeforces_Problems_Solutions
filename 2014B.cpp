// Created by Momin_Rifat
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n, k;
        cin >> n >> k;  
        cout << (((n + 1) * n / 2 - (n - k) * (n - k + 1) / 2) % 2 ? "NO" : "YES") << endl;
    }
    return 0;
}