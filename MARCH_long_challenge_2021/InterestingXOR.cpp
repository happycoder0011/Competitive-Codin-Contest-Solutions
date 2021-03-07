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

    int n;
    cin>>n;
    int d=0;
    while(n>=pow(2,d))
    {
        d++;
    }
    bitset<32> s(n);
    ulli a=0,b=0,i;
    for(i=0;i<d-1;i++)
    {
        if(s[i]==0)
        {
            a+=pow(2,i);
            b+=pow(2,i);
        }
        else
        {
            a+=pow(2,i);
        }
    }
    b+=pow(2,i);
    cout<<(a*b)%1000000007<<endl;

}
return 0;}
