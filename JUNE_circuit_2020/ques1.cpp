#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#define for(i,a,b) for(int i=a;i<b;i++)

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin>>t;
for(i,0,t)
{
    int n,b1,b2;
    cin>>n>>b1>>b2;

       //identifying adjacent bases
       int part1 = max(b1,b2)-min(b1,b2)-1;//no.of points on one side
       int part2 = n - part1-2;//on the other


        //n-4 is points left to connect and n-3 is all possible bases
            cout<<((n-4)*(part1-1))+((n-4)*(part2-1))-(part1-2)-(part2-2)<<endl;


}


return 0;
}
