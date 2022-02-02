class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.length(), n = s.length();
        
        vector<int> ans;
        
        if(k > n)
            return ans;
        
        vector<int> mp1(26,0), mp2(26,0);
        
        for(char it : p)
            mp1[it-'a']++;
        
        for(int i=0; i<k; i++)
            mp2[s[i]-'a']++;
        
        if(mp1 == mp2)
            ans.push_back(0);
        
        for(int i=k; i<n; i++)
        {
            mp2[s[i]-'a']++;
            mp2[s[i-k]-'a']--;
            
            if(mp1 == mp2)
                ans.push_back(i-k+1);
        }
        
        return ans;
    }
};