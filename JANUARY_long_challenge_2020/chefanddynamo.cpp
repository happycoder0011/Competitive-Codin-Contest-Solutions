#include<iostream>
#include<math.h>
using namespace std;
int main()
{
long long t;
cin>>t;
for(long long i=0;i<t;i++)
{
    long long n,a,s,b,c,d,e,result,val;

    cin>>n;
    cin>>a;
    val = (long long)pow(10,n)-1;
    s = a+ 2*val +2;
    cout<<s<<endl;
    cin>>b;
    c=s -(a+b)-val-1;
    cout<<c<<endl;
    cin>>d;
    e=s-(a+b+c+d);
    cout<<e<<endl;
    cin>>result;
    if(result==-1)
     exit(0);
    fflush(stdin);
}



return 0;
}
