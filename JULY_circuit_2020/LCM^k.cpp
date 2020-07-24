#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define for(i,a,b) for(int i=a;i<b;i++)

ulli gcd(ulli a,ulli b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

ulli lcm(ulli a[],ulli n)
{
    ulli ans = a[0];
    for(i,1,n)
    {
        ans=(((a[i]*ans))/gcd(a[i],ans));

    }
    return ans;
}
ulli powe(ulli a,ulli b)
{
	ulli ans=a;

    if (b == 0)
        return 1;
    for(i,1,b)
	{
		ans = ans*a;
	}
    return ans;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);cout.tie(NULL);
cin.tie(0);
ulli t,n,m,k,fi,w;
cin>>t;
for(i,0,t)
{
    cin>>n>>m>>k;
    ulli a[n];
    for(j,0,n)
    {
        cin>>a[j];
    }
    w =lcm(a,n);
    fi=powe(w,k);
    cout<<fi%m<<endl;

}

return 0;}
