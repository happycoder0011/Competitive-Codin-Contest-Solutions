#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,j;
cin>>n;
int c=0;
for(int i=2;c!=n;i++)
{
  for( j=2;j*j<=i;j++)
  {
      if(i%j==0)
        break;
  }
  if(j==sqrt(i))
  {
    c++;
    cout<<j<<endl;
  }
}
return 0;}
