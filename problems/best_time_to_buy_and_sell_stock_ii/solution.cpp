class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       //  int maxProfit = 0;
       //  for(int i=0;i<prices.size()-1;i++) {
       //      for(int j=i+1; j<prices.size(); j++) {
       //          if(prices[j]-prices[i]>0)
       //              maxProfit += prices[j]-prices[i];
       //              break;
       //      }
       //  }
       // return maxProfit;
        
        int buy = prices[0];
        int maxProfit = 0;
        for (int i=1;i<prices.size();i++) {
            if(prices[i] > buy) {
                maxProfit += prices[i]-buy;             
            }
               buy = prices[i];
        }
        return maxProfit;
    }
};