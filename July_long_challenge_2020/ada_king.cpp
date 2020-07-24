#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int c=1;
    for(int j=1;j<=8;j++)
    {
        for(int k=1;k<=8;k++)
        {
            if(pow(abs(j-4),2)+pow(abs(k-4),2)<=2 && c<n && j!=4 && k!=4)
            {
            cout<<".";
            c++;
            }
            else
             if(j!=4 && k!=4)
            {
                cout<<"X";
            }
            else
              if(j==4 && k==4)
                cout<<"O";
            else
            {
                cout<<".";
            }

        }
        cout<<"\n";
    }
    cout<<"\n\n";
}



return 0;}
