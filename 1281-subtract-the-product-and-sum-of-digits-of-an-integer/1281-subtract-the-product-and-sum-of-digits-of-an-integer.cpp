class Solution {
public:
    int subtractProductAndSum(int n) {
        string s = to_string(n);
        int product = 1, sum = 0;
        for(auto x: s)
        {
            int p =(x - '0');
            product *= p;
            sum += p;
            
        }
        return product - sum;
    }
};