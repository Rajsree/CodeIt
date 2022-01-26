class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        //solution 1
      /*  if(nums.empty()) return {};
        vector<int> duplicates;
        for(int i=0; i<nums.size()-1; i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[j] == nums[i]) {
                    duplicates.push_back(nums[i]);
                }
            }
        }
        return duplicates;*/
        
        //solution 2
        
       /* if(nums.empty()) return {};  
        vector<int> duplicates;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == nums[i-1])
                duplicates.push_back(nums[i]);
        }
        return duplicates;*/
        
        //solution 3
      /*  if(nums.empty()) return {};
        vector<int> duplicates;
        unordered_map<int,int> hashMap;
        for(int i:nums) {
            hashMap[i]++;
        }
        for(auto it : hashMap) {
            if(it.second==2) {
                duplicates.push_back(it.first);
            }
        }
        return duplicates;*/
        
        //solution 4
        if(nums.empty()) return {};
        vector<int> duplicates;
        int index;
        for(int i=0; i<nums.size(); i++) {
            index = abs(nums[i]);
            if(nums[index-1] > 0) {
                nums[index-1] *= -1;
            } else {
                duplicates.push_back(index);
            }
        }
        return duplicates;
    }
};



//Time    Space
//O(N*N)   O(1)
//O(NlogN) O(1)
//O(N)     O(N) ---->Time complexity of UnorderedMap = O(1)
//O(N)     O(1)
