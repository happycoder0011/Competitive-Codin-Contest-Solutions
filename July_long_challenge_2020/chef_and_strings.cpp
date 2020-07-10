#include <bits/stdc++.h>
using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

 unsigned long long t;
cin>>t;
for( unsigned long long i=0;i<t;i++)
{
      unsigned long long n;
    cin>>n;

    unsigned long long sum=0,a[n],m;
    cin>>a[0];
    for( unsigned long long j=1;j<n;j++)
    {
        cin>>a[j];
        if(a[j]>a[j-1])
            m=a[j]-a[j-1];
        else
            m=a[j-1]-a[j];
        sum=sum+m-1;
    }
    cout<<sum<<endl;
}

return 0;}
