class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> x(26,0);
        for(auto c: s1)
            x[c-'a']++;
    
        for(int i = 0; i <= s2.size()-s1.size(); i++)
        {
            vector<int> xx(26,0);
            for(int j = 0; j < s1.size(); j++)
            {
                xx[s2[j+i]-'a']++;
            }
            if(x==xx)
                return true;
        }
        return false;
    }
};