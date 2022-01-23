class Solution {
    #include<algorithm>
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> hashTry;
        for(int i=0;i<nums.size();i++) {
            int findnum = target-nums[i];
            if(hashTry.find(findnum)!=hashTry.end()) {
                return {hashTry[findnum], i};
            }
            hashTry[nums[i]] = i;
        }
        return {};
        
 
    }
};