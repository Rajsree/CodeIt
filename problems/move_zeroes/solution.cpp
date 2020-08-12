class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p2=0, zeropointer = 0;
        int n = nums.size();
        for(; p2 < n; p2++) {
            if(nums[p2] != 0) {
                 swap(nums[p2], nums[zeropointer++]);
            }
            
        }
    }
};