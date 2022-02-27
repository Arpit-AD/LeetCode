class Solution {
public:
    int arraySign(vector<int>& nums) {
        int k = 0;
        for(auto z : nums)
            if(z < 0) k++;
            else if(z==0) return 0;
        if(k % 2)
            return -1;
        return 1;
    }
};