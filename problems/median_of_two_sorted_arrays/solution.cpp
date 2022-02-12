class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        //Step 1: Merge array in sorted order
        //Step 2: Middle number
        
        
        int n1 = nums1.size();
        int n2 =nums2.size();
        
        if(n1==0 && n2==0) return double(0);
        
        vector<int> sorted;
        int i=0, j=0;
        
       while(i<n1 && j<n2) {          
           if(nums1[i] <= nums2[j]) {
               sorted.push_back(nums1[i]);
               i++;
           } else {
               sorted.push_back(nums2[j]);
               j++;
           }
       }
        
       while(i<n1) {
                sorted.push_back(nums1[i]);
                i++;
            }     
        while(j<n2) {
               sorted.push_back(nums2[j]);    
                j++;
        }
              
        
        
        double res = 0.0;

        int n = sorted.size();

        if(n%2==1) {
            res = sorted[n/2];
        } else {   
            double a = sorted[n/2];
            double b = sorted[(n/2)-1];
            res = (a+b)/ 2;
        }
   
   
        return res;
        
        
    }
};