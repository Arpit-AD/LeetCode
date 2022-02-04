class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(!nums[i]) nums[i]=-1;
            if(i) nums[i]+=nums[i-1];
            
            if(nums[i]==0) ans=max(ans,i+1);
            else{
                if(m[nums[i]]==0) m[nums[i]]=i+1;
                else ans = max(ans,i+1-m[nums[i]]);
            }
        }
        return ans;
    }
};