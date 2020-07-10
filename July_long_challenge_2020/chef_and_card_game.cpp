#include <bits/stdc++.h>
using namespace std;

int calc(int x)
{
    int c=0;
    while(x!=0)
    {
        c = c+x%10;
        x=x/10;
    }
    return c;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n;
    cin>>n;
    int chef=0,monty=0,a,b;
    for(int j=0;j<n;j++)
    {
        cin>>a>>b;
        if(calc(a)>calc(b))
            chef++;
        else
         if(calc(a)<calc(b))
          monty++;
        else
        {
            chef++;
            monty++;
        }

    }
    if(chef>monty)
        cout<<0<<" "<<chef<<endl;
    else
    if(chef<monty)
        cout<<1<<" "<<monty<<endl;
     else
        cout<<2<<" "<<chef<<endl;
}

return 0;}

