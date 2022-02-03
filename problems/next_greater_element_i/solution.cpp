class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int m= nums1.size()-1;
        int n= nums2.size()-1;
        for(int i=0; i<=m; i++) {
            bool flag = false;
            int thisgreater = -1;
            for(int j=0; j<=n;j++){
                if(nums1[i]==nums2[j]) {
                    flag = true;                    
                }
                if(flag && nums2[j]>nums1[i]){
                    thisgreater = nums2[j];
                    break;
                }
            }
            res.push_back(thisgreater);
        }
        return res;
    }
};