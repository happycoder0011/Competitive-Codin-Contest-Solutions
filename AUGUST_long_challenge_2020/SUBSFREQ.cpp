#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;

int main() {
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>n;
      int a[n];
      for(int j =0 ;j<n;j++)
      {
          cin>>a[j];
      }
      for(int j=1;j<=n;j++)
      {
          int x =pow(2,n-j);
          cout<<x%1000000007<<" ";
      }
      cout<<endl;
  }
    return 0;
}
