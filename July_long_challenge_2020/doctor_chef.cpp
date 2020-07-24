#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin>>t;
for(int i=0;i<t;i++)
{
int n,x;
cin>>n>>x;
int a[n];
for(int j=0;j<n;j++)
{
    cin>>a[j];
}
sort(a,a+n);
int c=0,m;
for(int j=0;j<n;j++)
{
    m=a[j];
    if(m>x){
    while(m>0)
    {
        m=m-x;
        x=x*2;
        c++;
        m=m*2;
        if(m>a[j])
            m=a[j];
    }}
    else
    {
    x=2*x;
    c++;
    }
    }

cout<<c<<endl;
}
return 0;
}
