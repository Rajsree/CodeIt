class StockSpanner {
        stack<pair<int,int>> st;
    int index = 0;
public:
    StockSpanner() {
      
    }
    
    int next(int price) {
        if(st.empty()) {
            st.push({price, index++});
            return 1;
            
        } else {
              while(!st.empty() && price>= st.top().first) {
                   st.pop();  
                }
               int res;
               res = st.empty()? index+1 : index - st.top().second;
               st.push({price,index++});
               return res;
        }
      
      
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */