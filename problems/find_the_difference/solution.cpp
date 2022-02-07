class Solution {
public:
    char findTheDifference(string s, string t) {
        // int n= s.size()-1;
        int tn = t.size()-1;
        unordered_map<char,int> map; //frequncy map
        // char out;
        for(auto n: s) {
            map[n]++;      
        }
        for(int j=0;j<=tn; j++){
            if(map.find(t[j])!=map.end()){
                if(map[t[j]]>=1) {
                    map[t[j]]--; 
                } else {
                    // out =t[j];
                    return t[j];
                }
               
            } else {
                // out = t[j];
                // map[t[j]]--;
                return t[j];
            }
        }
        return '\0';
    }
};
/*
for( t) {
 if(t[i]!=s[i]) return t[i];
}

*/