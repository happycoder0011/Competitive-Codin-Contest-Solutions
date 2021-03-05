#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int co=0;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]==s[i+1] && s[i]=='1') || s[i]=='0')
        {
            continue;
        }
        else
        {
            co++;
        }
    }
    cout<<co<<endl;
}
return 0;}
