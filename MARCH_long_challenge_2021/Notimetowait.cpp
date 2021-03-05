#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,h,x,m;
cin>>n>>h>>x;
vector<int> a;
for(int i=0;i<n;i++)
{
    cin>>m;
    a.push_back(m);
}

if(find(a.begin(),a.end(),h-x)!=a.end())
{
    cout<<"YES";
}
else
    cout<<"NO";
return 0;}
