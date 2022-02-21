class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> x;
        unordered_map<int,int> mp;
        for(auto c: nums)
            mp[c]++;
        for(auto c: mp)
            if(c.second > nums.size()/3)
                x.push_back(c.first);
        
        return x;
    }
};