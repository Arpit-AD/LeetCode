class Solution {
    vector<vector<int>> x;
public:
    void recursion(int i, int target, vector<int>& z, vector<int>& candidates){
        if(i == candidates.size())
        {
            if(target == 0)
                x.push_back(z);
            return;
        }
        //pick
        if(candidates[i] <= target)
        {
            z.push_back(candidates[i]);
            recursion(i,target-candidates[i],z,candidates);
            z.pop_back();
        }
        //not pick
        recursion(i+1,target,z,candidates);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> s ;
        recursion(0,target,s,candidates);
        return x;
        
    }
};