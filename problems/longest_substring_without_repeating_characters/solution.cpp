class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n<=1) {
            return n;
        }
        
        map<char, int> entry;
        int maxlen = 0;
        int start = 0; 
        
        
        for(int i=0; i<n; i++) {
            if(entry.find(s[i])!=entry.end()) { 
                start = max(start, entry[s[i]]+1);            
            } 
                maxlen = max(maxlen,i-start+1); 
                entry[s[i]] = i;                     
             
        }
        
        
        return maxlen;
        
        
    }
};