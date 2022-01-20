class Solution {
    vector<vector<int>> ans;
public:
    void f(vector<int> x, vector<int> nums, vector<int> z){
        if(x.size() == nums.size())
        {
            ans.emplace_back(x);
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(z[i] != 1){
                x.emplace_back(nums[i]);
                z[i] = 1;
                f(x,nums,z);
                z[i] = 0;
                x.pop_back();
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> x;
        vector<int> z(nums.size(),0);
        f(x,nums,z);
        return ans;
    }
};