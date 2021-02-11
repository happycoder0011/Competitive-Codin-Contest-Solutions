#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int m=10;
while(m>0)
{
 if(n%m==0)
 {
     cout<<m;
     return 0;
 }
 m--;
}
return 0;
}
