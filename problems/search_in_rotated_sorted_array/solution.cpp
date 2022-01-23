
class Solution {
public:
    int search(vector<int>& nums, int target) {    
        int start = 0;
        int end = nums.size()-1;
        
        while(start<=end){
            if(target==nums[start]) return start;
            if(target==nums[end]) return end;
            (target > nums[start]) ?  start++ :  end--;
            
        }
        return -1;
    }
};