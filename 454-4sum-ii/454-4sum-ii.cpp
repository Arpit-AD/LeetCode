class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans = 0;
        int n = nums1.size();
        unordered_map<int,int> z;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                z[nums1[i]+nums2[j]]++;
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                int k = -(nums3[i]+nums4[j]);
                // if(z[k] > 0)
                    ans += z[k];
            }
        return ans;
    }
};