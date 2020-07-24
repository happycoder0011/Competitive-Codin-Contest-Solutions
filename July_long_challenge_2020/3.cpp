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
    int n,j,p,q;
    cin>>n;
    int a=4*n-1;
    int x[a],y[a];
    for(j=0;j<(4*n-1);j++)
    {
       cin>>x[j]>>y[j];
    }
    sort(x,x+a);
    sort(y,y+a);
     for(j=0;j<(4*n-1);j++)
    {
        if(x[j]==x[j+1])
          {
              j++;
               continue;

          }
        else
           {
             p=x[j];
             break;
           }

    }
      for(j=0;j<(4*n-1);j++)
    {
         if(y[j]==y[j+1])

          {
              j++;
               continue;

          }
        else
            {q=y[j];
            break;}}

            cout<<p<<" "<<q<<endl;
}

return 0;
}
