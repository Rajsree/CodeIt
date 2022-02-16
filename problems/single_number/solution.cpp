class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        if(n==1) {
            return nums[0];
        }
        unordered_set<int> myset;
        
        for(int i=0; i<n; i++){
            if(myset.find(nums[i])!=myset.end()) {
                myset.erase(nums[i]);
            } else {
               myset.insert(nums[i]);
            }
            
        }
        
        return *myset.begin();
    }
};