class Solution {
    vector<vector<int>> x;
public:
    void recursion(int i , vector<int>& nums, vector<int>& z){
        if(i == nums.size())
        {
            x.push_back(z);
            return;
        }
       
        z.push_back(nums[i]);
        recursion(i+1,nums,z);
        z.pop_back();
        recursion(i+1,nums,z);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> z;
        recursion(0,nums,z);
        return x;   
    }
};