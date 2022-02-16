class Solution {
public:
    //I/p: [[1,3], [2,5], [6,7]]   [1,2]
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        
        intervals.push_back(newInterval);
        
        sort(intervals.begin(), intervals.end(),  [](const auto a, const auto b) {
            return a[0]<b[0];
        });
        //[[1,3],[1,2],[2,5], [6,7]]
        
        res.push_back(intervals[0]);
        
        for(int i=1; i<intervals.size(); i++) {
            vector<int> last = res.back();
            if(last[1] < intervals[i][0]) {
                res.push_back(intervals[i]);
            } else {
                res.back()[1] = max(intervals[i][1], last[1]);
            }
            
        }
        return res;
        
    }
};