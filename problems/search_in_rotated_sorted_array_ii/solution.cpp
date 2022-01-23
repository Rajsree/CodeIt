#include <math.h>

class Solution {
   
public:
    bool search(vector<int>& nums, int target) {
    
        int end = nums.size()-1;
        if(end==0) {
            if(nums[0]==target){ return true;}
            else {return false;}
        }
        
        int start = 0;
        while(start<=end) {
            if((target ==nums[start]) || (target==nums[end] )) return true;
            if(target > nums[start]) {
                start++;
            } else {
                end--;
            }
        }
        return false;
    }
};