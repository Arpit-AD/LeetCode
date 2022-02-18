class Solution {
public:
    string removeKdigits(string num, int k) {
        string s = "";
        int n = num.size();
        
        s.push_back(num[0]);
        for(int i = 1; i < n; i++)
        {
            while(k && s.back()>num[i])
            {
                k--;
                s.pop_back();
            }
            s+= num[i];
        }
        
        while(k && !s.empty())
        {
            k--;
            s.pop_back();
        }
        
        if(s.length()>1 && s[0] == '0')
        {
            reverse(s.begin(),s.end());
            while(s.back() == '0')
                s.pop_back();
            reverse(s.begin(),s.end());
        }
        
        return s == ""? "0" : s;
        
    }
};