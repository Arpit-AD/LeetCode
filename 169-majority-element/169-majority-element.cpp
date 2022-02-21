class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> k;
        int n;
        for(auto z: nums)
        {
            k[z]++;
            if(k[z] > nums.size()/2)
                n = z;
        }
        
        return n;
        
    }
};