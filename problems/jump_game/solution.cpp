class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size()-1;
        int reachable = 0;
        for(int i=0; i<=n; i++) {
             if(i>reachable) return false;
            reachable = max(i+nums[i],reachable);
           
        }
        return true;
    } 
};