class Solution {
public:
    int numSplits(string s) {
     
        int start = 0; 
        int n=s.length();
        vector<int> prefix(n), suffix(n);
     
        unordered_set<char> duplicates1;
        unordered_set<char> duplicates2;
        
        while(start<n) {            
            duplicates1.insert(s[start]);
            duplicates2.insert(s[n-1-start]);
            prefix[start] = duplicates1.size();
            suffix[n-1-start] = duplicates2.size();
            start++; 
        }
                  
         int k = 0;
        for(int i=1; i<n; i++){
            if(prefix[i-1] == suffix[i])
                    k++;            
        
        }            
          
        
        return k;        
    }
};