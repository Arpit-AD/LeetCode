class Solution {
public:
    vector<int> ans;
    void get_num(int low , int high,int start)
    {
        int num = 0;
        for(int i = start;i<=9;i++)
        {
            num = (num * 10) + i; // (1 * 10) + 2 = 12 , (12 * 10) + 3 = 123
            if(num >= low && num <= high) // till the number in range of low and high
            {
                ans.push_back(num);
            }
            if(num > high) // if the number is out of range then return
                return;
        } 
    }
    vector<int> sequentialDigits(int low, int high) {
        for(int i = 1;i<=9;i++) // so get the first letter of the digit 
        {
            get_num(low,high,i);
        }
        // sort the array
        sort(ans.begin(),ans.end());
        return ans;
    }
};