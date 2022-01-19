class Solution {
    vector<vector<int>> k;
public:
    void recursion(int i, vector<int> nums, vector<int> z){
        k.emplace_back(z); 
        for(int j = i; j < nums.size(); j++){
            if(j != i && nums[j] == nums[j-1]) continue;
            z.push_back(nums[j]);
            recursion(j+1,nums,z);
            z.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> z;
        sort(nums.begin(),nums.end());
        recursion(0,nums,z);
        return k;
    }
};