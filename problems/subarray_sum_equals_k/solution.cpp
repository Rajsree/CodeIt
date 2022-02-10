class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size()-1;
        unordered_map<int,int> sumOccurrencesMap ;
        int count = 0, sum =0;
        sumOccurrencesMap[sum]=1;
        for(int start=0; start<=n; start++) {
            sum+=nums[start];
            if(sumOccurrencesMap .find(sum-k)!=sumOccurrencesMap .end()){
                count+=sumOccurrencesMap[sum-k];
            }
            sumOccurrencesMap[sum]++;

        }
        return count;
    }
};