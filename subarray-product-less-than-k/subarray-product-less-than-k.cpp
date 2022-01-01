class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        long long p = 1;
        int ans = 0;
        int n = a.size();
        for(int i = 0, j = 0;  j < n; j++)
        {
            p *= a[j];
            
            while(i < j && p >= k)
            {
                p /= a[i];
                i++;
            }
            if(p < k)
            {
                int l = j - i + 1;
                ans += l;
            }
        }
        return ans;
    }
};