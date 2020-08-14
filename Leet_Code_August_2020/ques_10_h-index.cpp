class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n= citations.size();
        int x=0;
        vector<int> mp(n+1,0);

        for(int i=0;i<n;i++)
        {
            mp[min(n,citations[i])] += 1;
        }

        for(int i=n;i>=0;--i)
        {
            x +=mp[i];
            if(x>=i){return i;}
        }
        return 0;
    }
};
