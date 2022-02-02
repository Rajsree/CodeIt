class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return n;
        int k = 0;
        for(int i =0 ; i<nums.size(); i++) {
            if(nums[i]>nums[k]) {
                k++;
                nums[k]=nums[i];
            }
        }
  return k+1;
    }
         
};