class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min_ele = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            min_ele = min(min_ele,prices[i]);
            profit = max(profit, prices[i]-min_ele);
        }
        return profit;
    }
};