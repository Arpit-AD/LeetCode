class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int n=nums.size();
        if(n<=2)return n;
        int end=0;
        int i=0,j=0;
        while(j<n){
            int c=2; // at most c times
            while(j!=n and nums[i]==nums[j])j++;
            while(end<j and i<j and c--){
                nums[end++] = nums[i++];
            };
            i=j;
        };
        
        return end;
    }
};