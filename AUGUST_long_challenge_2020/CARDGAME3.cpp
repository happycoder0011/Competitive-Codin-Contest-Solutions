#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t,c,r;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>c>>r;
      int cc=0,rr=0;
      cc = c/9;
      if(c%9>0)
        cc++;
      rr = r/9;
      if(r%9>0)
        rr++;

      if(cc<rr)
        cout<<0<<" "<<cc<<endl;
      else
        cout<<1<<" "<<rr<<endl;
  }
    return 0;
}
