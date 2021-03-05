#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
#include<fstream>

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string line,firstline;
vector<int> para;
ifstream myfile("a.txt");
map<string,pair<int,int>> street;
map<string,int> streettime;
map<int,vector<string>> vehicles;

if(myfile.is_open())
{
    getline(myfile,firstline);
    istringstream ss(firstline);
    string word;
    while(ss>>word)
    {
        para.push_back(stoi(word));

    }

   /* int t=0;
    while(t!=5)
    {
        cout<<para[t]<<" ";
        t++;
    }
    cout<<endl;*/
    int s = para[2];
    int c=0;
    int i=0;
    while(getline(myfile,line))
    {

       istringstream ss(line);
       string word;
       c++;
       if(c<=s){

       int x,y;
       string s;
       while(ss>>word)
       {
           x = stoi(word);
           break;
       }
       while(ss>>word)
       {
            y = stoi(word);
            break;
       }
       while(ss>>word)
       {
           s = word;

           street.insert({s,make_pair(x,y)});
           break;
       }
       while(ss>>word)
       {
           int x = stoi(word);
           streettime.insert({s,x});
           break;
       }
    }else
    {
       int i=0;
        while(ss>>word)
       {
           int x;
        if(i=0)
        {
            x = stoi(word);
            i=1;
        }
        else{
           vehicles[x].push_back(word);
        }
       }
    }
    }
    myfile.close();

}
cout<<"\n"<<"street"<<endl;
for(auto j : streettime)
{

       cout<<j.first<<j.second<<endl;
}
cout<<"vehicles"<<endl;
for(auto j: vehicles)
{
    cout<<j.first<<endl;
}
return 0;}
