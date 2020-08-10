class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mymap;
        vector<int> mapArr;
        
        for(auto n1 : nums1) {
           // cout << n1;
            mymap[n1]++;
        }
        
        for(auto n2 : nums2) {
            if(mymap[n2]>=1) {
                mymap[n2]--;
                mapArr.push_back(n2);
            }
        }
               
        mymap.clear();
        
        return mapArr;
    }
};