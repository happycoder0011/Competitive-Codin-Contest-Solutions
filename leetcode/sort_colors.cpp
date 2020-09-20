class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=0;
        for(int i=0;i<nums.size();i++)
        {

            if(nums[i]==0)
                r++;
            else

            if(nums[i]==1)
                w++;
            else

            if(nums[i]==2)
                b++;
        }
        fill(nums.begin(),nums.begin()+r,0);
        fill(nums.begin()+r,nums.end()-b,1);
        fill(nums.end()-b,nums.end(),2);


    }
};
