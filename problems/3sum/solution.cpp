class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n= nums.size()-1;
        // if(n<2) {
        //     return {};
        // }
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        
        for(int i=0; i<=n && nums[i]<=0; i++) {
            if(i==0 || nums[i]!=nums[i-1]) {
                twosum(nums, i, res);
            }
        }
        return res;
    }
    
    void twosum(vector<int>& nums, int i, vector<vector<int>>& res) {
        int lo=i+1, hi=nums.size()-1;
        while(lo<hi) {
            int sum = nums[i]+nums[lo]+nums[hi];
            if(sum<0) lo++;
            else if(sum>0) hi--;
            else {
                res.push_back({nums[i], nums[lo++], nums[hi--]});
                while(lo<hi && nums[lo]==nums[lo-1]){
                    lo++;
                }
            }
        }
    }

};