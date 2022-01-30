class Solution {
    public int search(int[] nums, int target) {
        int left =0, right = nums.length-1;
        int pivot;
        while(left<=right){
            pivot = left+ (right - left)/2;
            if(nums[pivot] > target) right = pivot -1;
            if(nums[pivot] < target) left = pivot +1;
            if(nums[pivot] == target) return pivot;
        }
        
        return -1;
    }
}