#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    string s,p;
    int a[26]={0},x;
    int y = p.size();
    cin>>s>>p;
    for(int j=0;j<s.size();j++)
    {
        x = s[j];
        a[x-97]++;
    }
    int w=0;
    for(int j=0;j<p.size();j++)
    {
        x = p[j];
        a[x-97]--;
        if(p[0]==p[j] && p[j]==p[j-1])
         w++;
    }
    for(int j=0;j<26;j++)
    {
        if(j+97 == p[0])
        { string s1,s2;

               s1 = s1.append(p);
               while(a[j]>0)
            {
                char c= j+97;
                s1 += c;
                s2 += c;
                a[j]--;
            }

            s2 =s2.append(p);

              if(strcmp(s1.c_str(),s2.c_str())==0)
              {
                  cout<<s1;
              }
              else
                if(strcmp(s1.c_str(),s2.c_str())>0)
              {
                cout<<s1;
              }
                else
                cout<<s2;
        }
        else
        {
            char c = j+97;
            while(a[j]>0)
            {
                cout<<c;
                a[j]--;
            }
        }
    }

cout<<endl;
  }
    return 0;
}
