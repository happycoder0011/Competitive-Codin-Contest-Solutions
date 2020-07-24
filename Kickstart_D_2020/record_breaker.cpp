#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t,n,l;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int a[n];
    int c=0;
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
        if(j==0)
            continue;
        else
        if(j==n-1)
        {
            if(a[j]>l)
                c++;
            else
            if(a[j-1]>a[j] && a[j-1]==l)
            c++;
        }
        else
        if(j==1)
        {
            if(a[0]>a[1])
                c++;
        }
        else
        if(a[j-1]>a[j] && a[j-1]==l)
        {
            c++;
        }

        int *m;
        m=max_element(a,a+j+1);
        l=*m;

    }
     cout<<"Case #"<<i+1<<": "<<c<<endl;
}

return 0;}
