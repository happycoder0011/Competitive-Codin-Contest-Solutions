class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(auto i = nums.begin();i<nums.end();i++)
      {
        vector<int>::iterator lower,upper;
        lower = lower_bound (nums.begin(), nums.end(), *i);
        upper = upper_bound (nums.begin(), nums.end(), *i);
        nums.erase(lower+1,upper);
      }


        return nums.size();
    }
};
