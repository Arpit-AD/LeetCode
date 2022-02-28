class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> A;
        for(int i = 0; i<nums.size(); i++)
        {
            string s = "";
            s +=(to_string(nums[i]));
            int c = 0;
            while(i+1<nums.size() && nums[i+1]==nums[i]+1)
            {
                c = 1;
                i++;
            }
            if(c)
            {
                s+="->" + to_string(nums[i]);
            }
            A.push_back(s);
        }
        return A;
    }
};