class Solution {
public:
    int hammingWeight(uint32_t n) {
        string s;
        while(n!=0)
        {
            s+=to_string(n%2);     //Convert the number to binary string
            n/=2;
        }
        int k = 0;
        for(auto x: s)
            if(x == '1')
                k++;
        return k;
    }
};