class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum = 0;
        vector<vector<int>> ds;
        vector<int> child;
        helper(candidates, 0, target, ds, child);        
        return ds;
    }
    
    void helper(vector<int>& candidates, int i, int target, vector<vector<int>>& ds, vector<int>& child) {        
        if(i==candidates.size()) {
            if(target==0) {
                  ds.push_back(child);
            }
            return;
        }    
        //Pick the element
        if(candidates[i]<=target) {
            child.push_back(candidates[i]);
            helper(candidates, i, target-candidates[i], ds, child);
            child.pop_back();
        }
        //Not pick the element
        helper(candidates,i+1, target, ds, child);
    }
};