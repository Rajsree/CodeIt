// #include<algorithm>
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int N = nums.size();
        if(N <=4) return 0;
        
       sort(nums.begin(), nums.end());    

        //case 1: Replacing the 3 smallest elements
        int diff1 = nums[N-1]-nums[3];
        
        //Case 2: Replacing the 3 largest elements
        int diff2 = nums[N-4]-nums[0];
        
        //Case3: Replacing 1st 2 elements and the last one.
        int diff3 = nums[N-2]-nums[2];
        
        //case 4: Replacing 1st and the last 2 lements
        int diff4 = nums[N-3]-nums[1];
        
        return  min({diff1,diff2,diff3,diff4});
    }
};