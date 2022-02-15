class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size()-1;
        int minproduct = nums[0];
        int maxproduct = nums[0]; 
        int result = maxproduct;
        for(int i=1; i<=n; i++) {
            int curr = nums[i];
            int temp_max=max(nums[i], max(maxproduct*curr, minproduct*curr));
            minproduct = min(curr, min(maxproduct*curr, minproduct*curr));
            
            maxproduct = temp_max;
            
            result = max(maxproduct,result);
        }
        return result;
        
    }
};

//Zero and -ve numbers may distrupt combo chain