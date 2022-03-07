class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> x;
        for(auto i : nums)
        {
            x[i]++;
            if(x[i] > 1) return true;
        }
        return false;
    }
};