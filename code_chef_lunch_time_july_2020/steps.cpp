#include <bits/stdc++.h>
using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
unsigned long long int t,n,k,i,j,d;
cin>>t;
for(i=0;i<t;i++)
{
    cin>>n>>k;
    for(j=0;j<n;j++)
    {
        cin>>d;
        if(d%k==0)
            cout<<1;
        else
            cout<<0;
    }
    cout<<endl;
  }

return 0;}

