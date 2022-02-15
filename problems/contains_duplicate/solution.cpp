class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size()-1;
        
        if(n <= 0) {
            return false;
        }
        
        unordered_set<int> setn;
        for(int i=0;i<=n;i++) {
            if(setn.find(nums[i])!=setn.end()){
                return true;
            }
            setn.insert(nums[i]);
        }
        return false;
    }
};