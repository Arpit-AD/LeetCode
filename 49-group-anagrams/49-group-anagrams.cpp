class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>> x;
        for(int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            sort(s.begin(),s.end());
            x[s].emplace_back(i);            
        }
        vector<vector<string>> p;
        for(auto c: x)
        {
            vector<string> pp;
            for(int i = 0; i < c.second.size(); i++)
            {
                pp.push_back(strs[c.second[i]]);
            }
            p.push_back(pp);
        }
        
        return p;
        
        
    }
};