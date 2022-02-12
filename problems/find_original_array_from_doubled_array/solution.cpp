class Solution {
public:
 
    vector<int> res;
    unordered_map<int,int> map;
    
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if(n==0 || (n)%2!=0) return {};
        
        sort(changed.begin(),changed.end()); //imp
        
        for( auto i:changed) {
            map[i]++;
        }
        
        for(int i=0; i<n; i++) {
            int num = changed[i];
            if(map[num] == 0) continue;
            
            if(map.find(2*num)!=map.end() && map[num]>0 && map[2*num]>0) {
                res.push_back(num);
                map[num]--;
                map[2*num]--;
            } else {
                return {};
            }
        }
        return res;
    }
};

//Approach 1 n%2!=0 > []
/* n%2 {
 map ( i, i*2)  (1,2, 2,4, 4,8) => sort [ 1, 2,3, 4,6, 8]
 [i]
}*/// lowerbound (n*2) visited[i]=-1


//Approcah 2

//Hash map count 1
// count 0 // {}
//res
