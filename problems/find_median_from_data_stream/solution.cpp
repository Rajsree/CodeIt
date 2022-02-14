class MedianFinder {
public:

    priority_queue<int> pq; //max-heap
    priority_queue<int, vector<int>, greater<int>> pqmin; //min-heap
    vector<int> res;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(pq.empty() || num<pq.top()) {
            pq.push(num);
        } else {
            pqmin.push(num);
        }
        
        if(pq.size() > pqmin.size()+1) {
             pqmin.push(pq.top());
            pq.pop();           
         
        } else if(pq.size()+1 < pqmin.size()) {
          pq.push(pqmin.top());
            pqmin.pop();
        }   
      
        
    }
    
    double findMedian() {
        if(pq.size()==pqmin.size()) return pq.empty()? 0 : (pq.top()+pqmin.top())/2.0;
        else return (pq.size()>pqmin.size()) ? pq.top() : pqmin.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */