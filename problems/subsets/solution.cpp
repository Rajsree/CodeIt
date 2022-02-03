class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> res;
        helper(nums, subset, res, 0);
        return res;
    }
    void helper(vector<int> &nums, vector<int> &subset, vector<vector<int>> &res, int i) {
        if(i==nums.size()) {
             res.push_back(subset);
            return;
        }
        // res.push_back(subset);
        
        subset.push_back(nums[i]);
        helper(nums,subset,res,i+1);
        subset.pop_back();
        helper(nums,subset,res,i+1);
            
    }
};