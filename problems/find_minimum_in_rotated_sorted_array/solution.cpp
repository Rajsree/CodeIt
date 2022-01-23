class Solution {
public:
    int findMin(vector<int>& nums) {
        int end = nums.size()-1;
        if(end == 0) return nums[0];
        
        
        int mid;
        
        int start = 0;
        
        while(start<=end) {
            mid = start+(end-start)/2;
            if(nums[mid]==nums[end]) return nums[mid];
            (nums[mid] > nums[end]) ?  start = mid+1 : end = mid;                
            
        }
        return nums[mid];
        
    }
};