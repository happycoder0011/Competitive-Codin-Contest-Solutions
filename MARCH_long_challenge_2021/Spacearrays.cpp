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
    vector<int> a;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());int co=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<i+1)
        {
            co += i+1-a[i];
        }
        else
        if(a[i]>i+1)
        {
            cout<<"Second"<<endl;
            break;
        }
    }
    if(co%2!=0)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
}
return 0;}
