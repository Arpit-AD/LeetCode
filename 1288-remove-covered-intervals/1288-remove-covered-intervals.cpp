class Solution {
public:
    static bool comp(vector<int>&vec,vector<int>&vec2){
        if(vec[0]==vec2[0]){
            return vec[1]>vec2[1];
        }
        return vec[0]<vec2[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end(),comp);       
        vector<int> tmp;
        tmp=intervals[0];
        for(auto x:intervals){
            if(x[0]>=tmp[0] && x[1]<=tmp[1]){
            }
            else{
                ans.push_back(tmp);
                tmp=x;
            }
        }
        ans.push_back(tmp);
        return ans.size();
    }
};