#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define for(i,a,b) for(int i=a;i<b;i++)

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin>>n;
int a[n];
for(i,0,n)
{
    cin>>a[i];
}
int c=0,temp=0;
int sw=1;
while(sw!=0)
{
    sw=0;
    c++;
    for(i,0,n-1)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i+1]=a[i];
            a[i]=temp;
            sw=1;
        }
    }
}
cout<<c<<endl;
return 0;
}
