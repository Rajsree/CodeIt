class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      //  int n = nums.size();
        if(nums.size()==0)
            return 0;
         int p1 = 0;
        for(int p2=1; p2<nums.size(); p2++){
            if(nums[p1] != nums[p2]) {
                nums[p1+1] = nums[p2];
                p1++;
            }                 
        }
        
        return p1+1;
        
        // std::sort(nums.front(),nums.end());
        // nums.erase(std::unique(nums.front(), nums.end()), nums.end());
        // return nums.size();
               
    }
};