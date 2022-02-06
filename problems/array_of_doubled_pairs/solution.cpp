class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
//Create frequency hash map
        unordered_map<int,int> count;
        for(int n: arr) {
            count[n]++;
        }
        
        sort(arr.begin(), arr.end(), [](const int& i1, const int& i2) {
            return abs(i1) < abs(i2);
        });
        
        for(int x:arr) {
            if(count[x] == 0) continue;
            
            if(count.find(2*x)!=count.end() && count[x]>0 && count[2*x]>0) {
                //pair present
                //remove pair
                count[x]--;
                count[2*x]--;
            } else {
                return false;
            }
        }
        return true;
    }
};

//sort 
// i to n
// lower_bound 2*num
// visitied=1e9
//res