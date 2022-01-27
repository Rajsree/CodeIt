class Solution {

public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // int n = points.size();
         priority_queue<vector<int>> maxHeap;
        vector<vector<int>> ans;
        
        for(vector point: points) {
            int dist = point[0]*point[0] + point[1]*point[1];       
            maxHeap.push({dist, point[0], point[1]});
             if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
          for(int i=0; i<k; i++) {
              vector<int> currentPoint = maxHeap.top();
              ans.push_back({currentPoint[1], currentPoint[2]});
              maxHeap.pop();
          }
        return ans;        
    }
};