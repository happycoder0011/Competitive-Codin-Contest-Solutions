#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int w[n],l[n];
        map<int,int> mp,wl;
        for(int i=0;i<n;i++)
        {
            cin>>w[i];
             mp.insert(pair<int, int>(w[i],i));
        }
        for(int i=0;i<n;i++)
        {
         cin>>l[i];
         wl.insert(pair<int,int>(w[i],l[i]));
        }
        int c=0;
        int i=0;
        auto en = mp.end();
        en--;

        for(auto itr = mp.begin();itr!=en;itr++ )
        {
            auto next = itr;
            next++;
            while(next->second<=itr->second)
            {
                next->second = next->second + wl[next->first];
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;


}
