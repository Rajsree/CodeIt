class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buy =prices[0];
        int end_day = prices.size()-1;
        for(int sell=1; sell<=end_day; sell++) {
            if(prices[sell] < buy) {
                buy = prices[sell];
            }
            maxProfit = max(maxProfit, prices[sell]-buy);
        }
        return maxProfit;
    }
};