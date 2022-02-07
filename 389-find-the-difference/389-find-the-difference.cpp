class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        vector<int> abc(26,0);
        for(int i = 0; i < n; i++)
        {
            abc[s[i]-'a']++;
            abc[t[i]-'a']--;
        }
        abc[t[n]-'a']--;
        for(int i = 0; i < 26; i++)
            if(abc[i] < 0) return 'a'+i;
        return 'a';
    }
};