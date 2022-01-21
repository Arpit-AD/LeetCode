class Solution {
public:
    string getPermutation(int n, int k) {
        int f = 1;
        vector<int> x;
        for(int i = 1; i < n; i++)
        {
            f = f * i;
            x.push_back(i);
        }
        x.push_back(n);
        string ans = "";
        k--;
        while(true){
            ans += to_string(x[k/f]);
            x.erase(x.begin()+k/f);
            if(x.size() == 0)
                break;
            k = k % f;
            f = f / x.size();
        }
        return ans;
    }
};