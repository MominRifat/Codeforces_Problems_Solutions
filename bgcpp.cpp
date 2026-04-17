// c++ 1 - n sum ; 
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    // 1 sec 10^8 operations
    int n; // 0(1) space complexity
    cin >> n; // 0(1) space complexity
    int sum = 0; // 0(1) space complexity
    for(int i = 1; i <= 1e6; i++) { // 0(N) space complexity
        for(int j = 1; j <= 1e6; j++) { // 0(N) space complexity
            sum += j; // 0(1) space complexity
        }
    }// o(N^2) time complexity
    cout << sum << endl; // 0(1) space complexity
    return 0;
}