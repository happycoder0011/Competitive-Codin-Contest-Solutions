#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define for(i,a,b) for(int i=a;i<b;i++)

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

ulli t,n;
cin>>t;
for(i,0,t)
{
    cin>>n;
    cout<<((n*(n+1))/2) +1<<endl;
}

return 0;}

