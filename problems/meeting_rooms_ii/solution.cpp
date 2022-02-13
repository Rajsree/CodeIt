class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        int n= intervals.size()-1;
        priority_queue<int, vector<int> ,greater<int>> pq; 
        
        sort(intervals.begin(), intervals.end(), [](const auto a, const auto b) {
            return a[0]<b[0];
        });
        
        pq.push(intervals[0][1]);
        
        for(int i=1; i<=n; i++) {
            int comp = pq.top();
            if(comp <= intervals[i][0]) {
                pq.pop();
                pq.push(intervals[i][1]);        
            } else {
                pq.push(intervals[i][1]);           
            }
        }
        return pq.size();
        
    }
};