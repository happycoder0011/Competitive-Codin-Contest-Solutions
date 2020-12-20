#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
 int main()
 {
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int s,w1,w2,w3;
    cin>>s>>w1>>w2>>w3;
    if((w1+w2+w3)<=s)
    {
        cout<<1<<endl;

    }
    else
    if((w1+w2)<=s || (w2+w3)<=s)
    {
       cout<<2<<endl;

    }
     else
    {
       cout<<3<<endl;

    }
}
return 0;
 }

