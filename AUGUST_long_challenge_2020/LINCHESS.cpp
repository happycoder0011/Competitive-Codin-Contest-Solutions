#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t,n,k,j;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>n>>k;
    int a[n];
    for( j=0;j<n;j++)
    {
        cin>>a[j];
    }
    sort(a,a+n,greater<int>());
    for(j=0;j<n;j++)
    {
        if(k%a[j]==0)
        {
             cout<<a[j]<<endl;
             break;
        }
    }
    if(j==n)
        cout<<-1<<endl;
  }
    return 0;
}
