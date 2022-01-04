class Solution {
public:
    int bitwiseComplement(int n) {
         if (n == 0) {
        return 1;
    }
    int len = 31 - __builtin_clz(n);
    int tmp = 0;
    for (int i=0; i<len; i++) {
        if ((n & (0x1 << i)) == 0) {
            tmp += 0x1 << i;
        }
    }
    
    return tmp;
    }
};