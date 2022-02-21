class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<string, int>h;
        
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=0, j=i+1; j<n;)
        {
            // cout<<i<<" "<<j<<" "<<nums[j]-nums[i]<<"\n";
            if(nums[j]-nums[i]==k)
            {
                string s=to_string(nums[i]) + "-" + to_string(nums[j]);
                // cout<<s<<" ";
                // cout<<A.first<<" "<<A.second<<"\n";
                if(h.find(s)==h.end())
                {
                    h[s]=1;
                    ans++;
                }
                i++;
                j++;
            }
            else if (nums[j]-nums[i]>k)
            {
                i++;
                if(i>=j)
                    j=i+1;
            }
            else
                j++;
        }
        
        return ans;
    }
};