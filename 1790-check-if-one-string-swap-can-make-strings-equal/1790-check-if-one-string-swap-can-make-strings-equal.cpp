class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> x;
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] != s2[i])
                x.push_back(i);
        }
        if(x.size() == 0)
            return true;
        if(x.size() == 2)
            swap(s1[x[0]],s1[x[1]]);
        
        return s1 == s2;
        
    }
};