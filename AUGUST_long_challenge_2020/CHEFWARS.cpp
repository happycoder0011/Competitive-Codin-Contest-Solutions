#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int p,t,h;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>h>>p;
      int sum=p;
      while(p!=0)
      {
          p=floor(p/2);
          sum = sum + p;

      }
      if(sum>=h)
        cout<<1<<endl;
      else
        cout<<0<<endl;
  }
    return 0;
}
