class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int k = 0, m = nums[0];
        for(auto c : nums)
        {
            k += c;
            m = max(k,m);
            if(k < 0) k = 0;
        }
        return m;
            
    }
};