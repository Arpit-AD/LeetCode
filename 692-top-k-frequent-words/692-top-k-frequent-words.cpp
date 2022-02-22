class Solution {
public:
     static bool comp(pair<string, int>& lhs, pair<string, int>& rhs) {
        if(lhs.second == rhs.second) return lhs.first < rhs.first;
        return lhs.second > rhs.second;  
    }   
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> x;
        vector<string> z;
        for(auto c: words)
            x[c]++;
        vector<pair<string, int>> vec(x.begin(), x.end());
        sort(vec.begin(),vec.end(), comp);
        for(int i = 0; i < k; i++)
            z.push_back(vec[i].first);
        
        return z;
        
            
    }
};