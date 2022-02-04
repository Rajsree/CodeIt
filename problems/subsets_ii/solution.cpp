class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>> ans;
        vector<int> subset;
        sort(nums.begin(),nums.end());
        helper(nums, 0, ans,subset);
     
        return ans;
    }
    void helper(vector<int> &nums,int ind, vector<vector<int>> &ans, vector<int> &subset) {
                    
            ans.push_back(subset);
    
        
        for(int i=ind; i<nums.size();i++) {
            if(i>ind && nums[i]==nums[i-1]) continue;
            
            subset.push_back(nums[i]);
            helper(nums,i+1,ans,subset);
            subset.pop_back();
        }       
        
    }
};