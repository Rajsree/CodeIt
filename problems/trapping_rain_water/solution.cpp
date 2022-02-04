// class Solution {
// public:
//     int trap(vector<int>& a) {
//         int n = a.size()-1;
//         int maxl = 0, maxr = 0, trapheight, sum=0;
//         int l=0, r=n;
//          // vector<int> quantity;
//         while(l<r) {
//             if(a[l] <= a[r]){
//                 if(a[l]<=maxl) {
//                     sum+=maxl-a[l];
//                     l++;
//                 }
//                 else maxl=a[l];
//             } else {
//                 if(a[r]<=maxr){
//                     sum+=maxr-a[r];
//                     r--;
//                 } 
//                 else maxr=a[r];
//             }
//         }
//         return sum;
//     }
// };


//nums = [0,1,0,2,1,0,1,3,2,1,2,1]
// class Solution {
//     public: 
//     int trap(vector<int> &nums) {
//         int h = 0;
//         for(int i=0; i<nums.size()-1;i++) {
//             int maxl = *max_element(nums.begin(), nums.begin()+i); 
//             int maxr = *max_element(nums.begin()+i, nums.end()); 
//             int localh = min(maxl,maxr)-nums[i];
//             if(localh>0) h+=localh;
//         }
//         return h;
//     }
// };


class Solution {
    public:
        int trap(vector<int> a) {
        int h =0;
        int l =0, r=a.size()-1;
        int maxl = 0, maxr = 0 ;
        int sum = 0;
        while(l<r) {
             if(a[l]<=a[r]) {
                if(a[l]<maxl) {
                    sum+=maxl-a[l];
                    l++;
                } else {
                    maxl = a[l];
                    l++;
                }
             }else {
                 if(a[r]<maxr) {
                     sum+=maxr-a[r];
                     r--;
                 } else {
                     maxr = a[r];
                     r--;
                 }

             }
        }
        return sum;
    }
};