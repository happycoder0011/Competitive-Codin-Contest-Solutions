#include <bits/stdc++.h>
using namespace std;
int noofcom(auto &col1,auto &col2)
{
    vector<char> vec3(min(col1.size(),col2.size()));
    auto it = set_intersection(col1.begin(),col1.end(),col2.begin(),col2.end(),vec3.begin());

    return it-vec3.begin();
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,set<char>> mp;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mp[s.substr(1)].insert(s[0]);
        }
        int ans = 0;
        for(auto pairi :mp)
        {
            for(auto pairj:mp)
            {
                if(pairi!=pairj)
                {
                    int common = noofcom(pairi.second,pairj.second);
                    ans += (pairi.second.size()-common)*(pairj.second.size()-common);

                }
            }
        }

    }

    return 0;


}
