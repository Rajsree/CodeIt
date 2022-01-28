
class Solution {
public:
    int search(vector<int>& nums, int target) {    
    int n= nums.size();
        if(n==0) return -1;
        if(n==1) {
            if(nums[0] == target) return 0;
            return -1;
        }
    
        int start = 0;
        int end = n-1;
        int pivot = -1;
        int rotation_index = -1;
        int find_val = -1;
        
        if(nums[start] < nums[end]) {
            rotation_index = 0;
        }
        
        while((start<=end) && (rotation_index<0) ) {         
             pivot = (end+start)/2;
            // if(nums[pivot] == target) {return pivot;}
            if(nums[pivot] > nums[pivot+1]) {
                rotation_index = pivot+1;
            } else {
                if(nums[pivot]>nums[start]) {
                   start = pivot; 
                } else {
                    end = pivot;
                }                
            }
        }
        
  
        if(target==nums[rotation_index]) return rotation_index;
        if(rotation_index==0) {
                find_val = lower_bound(nums.begin(), nums.end(),target)-nums.begin();
        } else {
            if(target==nums[0]) return 0;
            
            if(target>nums[0]) {
                    find_val = lower_bound(nums.begin(),nums.begin()+rotation_index,target)-nums.begin();
             } else {
                    find_val = lower_bound(nums.begin()+rotation_index, nums.end(), target)-nums.begin();
             }
        }

        
        if(find_val!=n && nums[find_val]==target) find_val=find_val;
        else find_val = -1;
        return find_val;
    }
};