class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
       int n=s.size();
        int cur_end=-1,cur_len=1;
        int last[26]={-1};
        for(int i=0;i<n;i++)
            last[s[i]-'a']=i;
            
        for(int i=0;i<n;i++)
        {
            cur_end=max(cur_end,last[s[i]-'a']);            
            if(cur_end==i)
            {
                ans.push_back(cur_len);
                cur_len=0;
            }
            cur_len++;
        }
        
        
        return ans;
    }
};