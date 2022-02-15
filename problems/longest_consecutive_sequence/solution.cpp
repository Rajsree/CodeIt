class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size()-1;
        set<int> setnums(nums.begin(), nums.end());
        
        int maxlen = 0;      
        int len =1;
       for(auto ele : setnums) {
           if(setnums.count(ele-1)) continue;
           int j=1;
           while(setnums.count(ele+j)) j++;
        
           maxlen = max(j, maxlen);
       }
        
        return maxlen;
    }
};