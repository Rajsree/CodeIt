/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
 
    let profit = 0;
    // let diff = 0;
    let min = prices[0];
        for(let j=1; j<prices.length; j++) {       
            min = Math.min(prices[j], min);
            // diff = prices[j]-min;
            if(prices[j]-min > profit) profit = prices[j]-min;
        }
    return profit;
};