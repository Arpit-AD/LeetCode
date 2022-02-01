class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> p (prices.size());
        int x = 0;
        p[prices.size()-1] = prices[prices.size()-1];
        for(int i = prices.size()-2; i >= 0; i--)
        {
          p[i] = max(prices[i],p[i+1]);
            // cout << p[i] << "p" << i << " ";
        }
        cout << endl;
        for(int i = 0; i < prices.size()-1; i++)
        {
            x = max(x,p[i+1]-prices[i]);
            // cout << x << "x" << " ";
        }
          return x;  
    }
};