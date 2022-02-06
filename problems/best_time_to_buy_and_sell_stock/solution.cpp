class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size()-1;
        int maxProfit = 0;
        int buy = prices[0];
        for(int i=1;i<=n;i++){
                buy = min(prices[i],buy);
                maxProfit = max(maxProfit, prices[i]-buy);
     
        }
        return maxProfit;
    }
};