#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
ulli t;
cin>>t;
for(int i=0;i<t;i++)
{
    ulli n,x;
    cin>>n;
    set<int> s;
    for(int j=0;j<n;j++)
    {
        cin>>x;
        if(s.count(x) || x==0)
            continue;
        else
            s.insert(x);

    }
    cout<<s.size()<<endl;
}
return 0;}
