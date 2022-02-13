class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size()-1;
        int maxival = nums[0];
        int currentSubArray = nums[0];
        for(int i=1; i<=n; i++) {
            int num = nums[i];            
            currentSubArray = max(num, currentSubArray+num);
            maxival = max(maxival,currentSubArray);
   
        }
        return maxival;
    }
};