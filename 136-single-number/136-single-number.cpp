class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> x;
        for(auto k : nums)
            x[k]++;
        for(auto z: x)
            if(z.second < 2)
                return z.first;
        return -1;
    }
};