class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i,x;
        vector<int> ans;
        for(i=0;i<nums.size();i++)
        {
            x=abs(nums[i])-1;
            if(nums[x]>=0)
                nums[x]=-nums[x];
            else
                ans.push_back(abs(nums[i]));

        }
        return ans;
    }
};
