class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        int n= nums.size()-1;
         if(n<=0) return 0;
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i=0; i<nums.size()-2; i++) {
            sum+=twosumsmaller(nums, i+1, target-nums[i]);
        }
        return sum;
    }
    
    int twosumsmaller(vector<int>& nums, int i, int target) {
        int lo=i, hi=nums.size()-1;
        int sum = 0;
        while(lo<hi) {
            if(nums[lo]+nums[hi]<target) {
                sum+=hi-lo;
                lo++;
            } else {
                hi--;
            }
        }
        return sum;
    }
};