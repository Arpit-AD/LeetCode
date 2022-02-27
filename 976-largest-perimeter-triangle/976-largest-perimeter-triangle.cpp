class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i = 0; i+2 < nums.size(); i++)
        if(nums[i] + nums[i+1] > nums[i+2] && nums[i+1] + nums[i+2] > nums[i] && nums[i+2] + nums[i] > nums[i+1])
            return nums[i] + nums[i+1] + nums[i+2];
           return 0;
    }
};