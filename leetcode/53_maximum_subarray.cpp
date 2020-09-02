class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int sum =nums[0];
        int best=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            sum = max(nums[i],sum+nums[i]);
            best = max(best,sum);
        }

        return best;
    }
};
