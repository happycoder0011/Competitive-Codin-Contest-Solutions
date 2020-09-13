#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
bool check(int a[],int n,int sum)
{
    int all=0;
    for(int i=0;i<n;i++)
    {
        if(all<sum)
            all += a[i];
        else
            if(all==sum)
            return true;
            else
                if(all>sum)
            {
                return false;
            }
    }
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int sum = ((n+1)*n)/2;
    if(sum%2!=0)
    {
      cout<<0;
      continue;
    }
    int num[n];
    iota(num,num+n,1);
        int d=0;
    for(int k=0;k<n;k++)
    {
        for(int m=k+1;m<n-1;m++)
        {
            swap(num[k],num[m]);
            if(check(num,n,sum/2)==1)
                d++;
            swap(num[k],num[m]);
        }
    }
    cout<<d<<endl;
}


return 0;}
