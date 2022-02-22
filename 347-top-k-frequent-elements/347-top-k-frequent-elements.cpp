struct comparer{
    bool operator()(pair<int,int> &a, pair<int,int>&b){
        return a.second > b.second;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        for(auto &a : nums){
            mp[a]++;
        }
        vector<pair<int,int>> v(mp.begin(),mp.end());
        nth_element(v.begin(), v.begin()+k ,v.end(), comparer());
        vector<int>out;
        for(int i = 0; i < k; i++){
            out.push_back(v[i].first);
        }
        return out;
    }
};