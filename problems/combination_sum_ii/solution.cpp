class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ds;
        vector<int> child;
        sort(candidates.begin(),candidates.end());
        helper(candidates, ds, child, target, 0);             
        return ds;
    }
    void helper(vector<int> &arr, vector<vector<int>> &ds, vector<int> &child, int target, int ind) {
            if(target==0) {        
                ds.push_back(child);
                return;
            }
            
        for(int i=ind; i<arr.size();i++) {
            if(i>ind && arr[i]==arr[i-1]) continue;            
            if(arr[i]>target) break;
            
            child.push_back(arr[i]);
            helper(arr,ds,child,target-arr[i],i+1);
            child.pop_back();
        }    
        
    }
};