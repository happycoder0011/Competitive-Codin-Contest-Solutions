#include <bits/stdc++.h>
using namespace std;
typedef long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--)
{
    ulli n,x;
    cin>>n;
    vector<ulli> a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    ulli s =a[0],t,u=a[n-1];
    ulli ans =0 ;
    for(int i=1;i<n-1;i++)
    {
        if(ans<(abs(a[i]-s)+abs(a[i]-u)+abs(s-u)))
        {ans=abs(a[i]-s)+abs(a[i]-u)+abs(s-u);}
    }
        cout<<ans<<endl;
}


return 0;}

