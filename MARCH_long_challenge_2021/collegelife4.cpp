#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
int func(int e, int h, int a, int b, int c)
{

    if(e<2)
        return max(func())
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--)
{
    int n,e,h,c,b,a;
    int cost;
    cin>>n>>e>>h>>a>>b>>c;

    if(e+h<(2*n))
    {
        cout<<-1<<endl;
        continue;
    }
    else
        cout<<func(e,h,a,b,c);
}
return 0;
}
