class StockPrice {
    int maxPrice = -1 , minPrice = 1e9;
public:
    map<int,int> stocks; // {timestamp, prices
    multiset<int> prices;
    
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(stocks.find(timestamp)!=stocks.end()) { //If already present
            prices.erase(prices.find(stocks[timestamp]));
        }
        stocks[timestamp] = price;
        prices.insert(price);
    }
    
    int current() {        
        return stocks.rbegin()->second;
    }
    
    int maximum() {
        return *prices.rbegin();
    }
    
    int minimum() {
        return *prices.begin();
        
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */