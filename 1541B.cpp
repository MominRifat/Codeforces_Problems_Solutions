#include<iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      
      int a[n + 1];
      for(int i = 1; i <= n; i++)
      {
        cin>>a[i];
      }
      
      long long int ans = 0;
      
      for(int i  = 1; i <= n; i++)
      {
        for(int j = a[i] - i; j <= n; j += a[i])
        {
          
          if(i < j && a[i] * 1ll * a[j] == i + j)
          {
            ans++;
          }
        }
      }
      
      cout<<ans<<endl;
    }
    
    
    return 0;
}