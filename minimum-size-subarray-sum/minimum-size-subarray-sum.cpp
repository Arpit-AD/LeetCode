class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int k = 0, z = INT_MAX;
        for(int l = 0, r = 0; r < nums.size(); r++ ){
            
            k += nums[r];
            while(k >= target)
            {
                z = min(z,r-l+1);
                k -= nums[l];
                l++;
            }
                
        }
        if(z == INT_MAX) return 0;
        return z;
        
        }
};