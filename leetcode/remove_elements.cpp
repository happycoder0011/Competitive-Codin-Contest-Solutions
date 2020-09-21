class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        sort(nums.begin(),nums.end());
        vector<int>::iterator lower,upper;
        lower = lower_bound (nums.begin(), nums.end(), val);
        upper = upper_bound (nums.begin(), nums.end(), val);
        nums.erase(lower,upper);
        return nums.size();
    }
};
