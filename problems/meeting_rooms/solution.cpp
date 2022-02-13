class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        int n= intervals.size()-1;
        if(n==0) return true;
        sort(intervals.begin(), intervals.end(), [](const auto a, const auto b) {
            return a[0]<b[0];
        });
        for(int i=0; i<n; i++) {
            if(intervals[i+1][0] < intervals[i][1]) {
                return false;
            }
        }
        return true;
    }
};