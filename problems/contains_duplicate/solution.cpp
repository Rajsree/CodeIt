class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 0) {
            return false;
        }
        
       unordered_map<int, int> mymap;
        
        for(auto x:nums)
            if(mymap[x])
                return true;
            else
                mymap[x]++;
        
        return false;
        
    }
};