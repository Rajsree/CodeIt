class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> s1;
        int n1= nums.size();
        for(int i=0; i<n1; i++) {
            if(s1.count(nums[i])) {
                s1.erase(nums[i]);
            } else {
                s1.insert(nums[i]);
            }
        }
        set<int> :: iterator itr=s1.begin();
        return *itr;
        
    }
};