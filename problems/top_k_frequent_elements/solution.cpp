class Solution {
public:
      static bool comp(pair<int,int>& a,pair<int,int>& b) {
         return a.second>b.second;
      }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash; //number ,freq    map : O(nlog(n)) so go for unordered_map : O(N)
        priority_queue<pair<int,int>> pq;  //number, freq   O(n)
        vector<int> res;  //O(n)
        
        int n= nums.size()-1;
        
        if(n==0) return nums;
        for(int i=0; i<=n; i++) {
            hash[nums[i]]++;
        }
        
        
        for(auto it: hash) {
            pq.push({it.second,it.first});
        }
    
        hash.clear();
        
        
        for(int i=0; i<k; i++) {     
            res.push_back(pq.top().second);
            pq.pop();
        }

        
        return res;
    }
  
};