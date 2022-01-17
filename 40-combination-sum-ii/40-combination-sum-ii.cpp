class Solution {
    vector<vector<int>> z;
public:
    void recursion(int i, int target, vector<int>& candidates, vector<int>& x){
        if(target == 0)
        {
            z.emplace_back(x);
            return;
        }        
        //picked
        for(int ij = i; ij < candidates.size(); ij++)
        {
            if(ij > i && candidates[ij] == candidates[ij-1]) continue;
            if(candidates[ij] > target) break;
            x.emplace_back(candidates[ij]);
            recursion(ij+1,target-candidates[ij],candidates,x);
            x.pop_back();
            
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> x;
        recursion(0,target,candidates,x);
        return z;
    }
};