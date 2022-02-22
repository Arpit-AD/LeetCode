class Solution {
public:
    int titleToNumber(string columnTitle) {
         int z =0;
        for(auto i:columnTitle){
            int x = i -'A' +1;
            z = z*26 +x;
        }
        return z;
    }
};