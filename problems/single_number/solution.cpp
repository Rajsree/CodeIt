class Solution {
public:
    int singleNumber(vector<int>& nums) {        
        set <int> s1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(s1.count(nums[i])){
                s1.erase(nums[i]);   
            } else {                
                s1.insert(nums[i]);
            }            
        }
        set <int> ::iterator it = s1.begin();
        return *it;
        
    };
};