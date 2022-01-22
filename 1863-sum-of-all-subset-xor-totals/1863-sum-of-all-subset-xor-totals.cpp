class Solution {
    vector<int> z;
public:
    void f(int i, vector<int> nums,int sum){
        if(i == nums.size())
        {
            z.emplace_back(sum);
            return;
        }
        
        f(i+1,nums,sum);
        f(i+1,nums,sum^nums[i]);
    }
    int subsetXORSum(vector<int>& nums) {
        f(0,nums,0);
        int abc = 0;
        for(int i = 0; i < z.size(); i++)
            abc += z[i];
        return abc;
    }
};