class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        unsigned long long int p=1;
        for(int i=1;i<=rowIndex+1;i++)
        {
            ans.push_back(p);
            p= p *(rowIndex-i+1)/i;
        }
    return ans;

    }
};
