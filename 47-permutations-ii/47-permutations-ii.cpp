class Solution {
     vector<vector<int>> ans;
public:
    void f( vector<int> x, map<int,int> z,int n){
        if(x.size() == n)
        {
            ans.emplace_back(x);
            return;
        }
        for(auto xt : z)
        {
            if(xt.second == 0) continue;
            z[xt.first]--;
            x.push_back(xt.first);
            
            f(x,z,n);
            
            x.pop_back();
            z[xt.first]++;
                
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> x;
        map<int,int> z;
        for(auto p: nums) z[p]++;
        f( x,z,nums.size());
        return ans;
    }
};