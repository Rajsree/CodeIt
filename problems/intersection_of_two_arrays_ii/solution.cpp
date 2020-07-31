class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> intersectArray;
        vector<int> result;
        
        for(auto n1 : nums1) {
            intersectArray[n1]++; 
        }
        
        for(auto n2 : nums2) {
            if(intersectArray[n2] != 0) {
                intersectArray[n2]--;
                result.push_back(n2);
            }
        }
        return result;
    }
};