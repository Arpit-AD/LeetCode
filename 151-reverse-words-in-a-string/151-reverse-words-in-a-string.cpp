class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        reverse(s.begin(),s.end());
        int start = 0;
        int size = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != ' ')
            {
                size++;
                if(i == n-1 or s[i+1] == ' ')
                {
                    reverse(s.begin()+start, s.begin()+i+1);
                    start += size + 1;
                }
            }
            else size = 0;
        }
        
        while(s.back() == ' ') s.pop_back();
        
        return s;
    }
};