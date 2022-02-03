class Solution {
    vector<vector<int>> ans;
public:
    void f(int i, vector<int>& z, vector<int>& temp, int k){
        if(temp.size() == k)
        {
            ans.emplace_back(temp);
            return;
        }
        if(i == z.size())
            return;
        
        temp.push_back(z[i]);
        f(i+1,z,temp,k);
        temp.pop_back();
        f(i+1,z,temp,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> z;
        for(int i = 1; i <= n; i++)
        {
            z.emplace_back(i);
        }
        vector<int> temp; 
        f(0,z,temp,k);
        
        return ans;
    }
};