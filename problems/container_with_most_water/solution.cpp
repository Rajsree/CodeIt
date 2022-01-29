class Solution {
public:
    int maxArea(vector<int>& height) {
    
        int waterQuantity =0;
        int right = height.size()-1;
        int left = 0;
        
        // for(int i=1; i<n; i++) {
        while(left<right){
            int currentHeight = height[right]>height[left] ? height[left] : height[right];
            int currentQuantity = currentHeight*(right-left);
            waterQuantity = max(currentQuantity,waterQuantity);
            if(height[left]<height[right]) left++;
            else right--;
         }
        
        
        return waterQuantity;
        
    }
};


 
    