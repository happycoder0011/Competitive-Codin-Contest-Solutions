#include <bits/stdc++.h>
using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
unsigned long long int diff,sum1,t,x,y,m,n,i,tot,tot1,tot2;
cin>>t;
for(i=0;i<t;i++)
{
    cin>>m>>n>>x>>y;
    tot = m*n;
    diff=y-x;
    if(diff>x)
    {
        diff=x;
    }
    if(diff>0){
    if(tot%2==0)
    {tot=tot/2;
     sum1=(diff*tot)+x*tot;
     cout<<sum1<<endl;
    }
    else
    {
        tot1=tot/2;
        tot2=tot1+1;

         sum1=(diff*tot1)+x*tot2;
         cout<<sum1<<endl;
    }
}
else
{
    if(tot%2==0)
    {
        cout<<y*tot/2<<endl;
    }
    else
    {
        cout<<y*(tot+1)/2<<endl;
    }
}

}
return 0;}

