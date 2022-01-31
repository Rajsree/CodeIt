//MAx HEAP
/*class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> heap(nums.begin(), nums.end());
            for(int i=0; i<k-1; i++) {
                heap.pop();
            }
        
        return heap.top();
        
    }
}; */


//MIN HEAP
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int> , greater<int>> heap;
            for(int i=0; i<nums.size(); i++) {
                 heap.push(nums[i]);
                if(heap.size()>k) {
                    heap.pop();
                }
               
            }
        
        return heap.top();
        
    }
};