#include <bits/stdc++.h>
using namespace std;
int calculate_hr(string time, int t)
{
    int hour;
    hour = 10*(time[0+t]-'0')+ 1*(time[1+t]-'0');
    if(time[6+t]=='P')
    {
        if(hour!=12)
        hour+=12;
        }
        if(time[6+t]=='A')
    {
        if(hour==12)
        hour-=12;
    }
    return hour;
}
int calculate_min(string time, int t)
{
    int minute;
    minute= 10*(time[3+t]-'0')+ 1*(time[4+t]-'0');
    return minute;
}

int main() {
    int t;
    string d;
    cin>>t;
    cin.ignore();
    while(t--)
    {
       string Q;
       vector<string> ans;
       getline(cin,Q);
       int ch,cm,fh,fm,rh,rm,x,y,z,n;
       ch=calculate_hr(Q,0);
       cm=calculate_min(Q,0);
        x=ch*100+cm;
       cin>>n;
       int m=n;
       cin.ignore();
       for(int i=0;i<m;++i)
       {
           string L;
           getline(cin,L);
           fh=calculate_hr(L,0);
           fm=calculate_min(L,0);
            y=fh*100+fm;

           rh=calculate_hr(L,0+9);
           rm=calculate_min(L,0+9);
           z=rh*100+rm;


           if(x>=y && x<=z)
           {
           ans.push_back("1");
           }
           else
           {
            ans.push_back("0");
           }
       }
        for(int m=0;m<ans.size();m++)
        {
            cout<<ans[m];
        }
        cout<<endl;
    }

    return 0;


}
