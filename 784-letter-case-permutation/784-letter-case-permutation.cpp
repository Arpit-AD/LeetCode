class Solution {
    vector<string> x;
public:
    void f(int i, string s, string z){
        if(i == s.length())
        {
            x.emplace_back(z);
            return;
        }
        if(isalpha(s[i]) != 0)
        {
            if(isupper(s[i]) != 0)
                z += tolower(s[i]);
            else
                z += toupper(s[i]);
            f(i+1,s,z);
            z.pop_back();
            z += s[i];
            f(i+1,s,z);
                
        }
        else
        {
            z += s[i];
            f(i+1,s,z);
        } 
            
    }
    vector<string> letterCasePermutation(string s) {
        string z = "";
        f(0,s,z);
        return x;
    }
};