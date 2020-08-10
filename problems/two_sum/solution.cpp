class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> unMap;
        
        for(int i=0; i<nums.size(); i++) {
            if(unMap.count(target - nums[i])) {
                return {unMap[target - nums[i]], i};
            } else {
                unMap[nums[i]] = i;
            }

        }

        return {};
        
    }
};