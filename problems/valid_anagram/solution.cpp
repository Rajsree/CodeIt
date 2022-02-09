class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int sn = s.length();
        int tn = t.length();
        
        int hash[26] = {0};
        
        if(sn!=tn) {
            return false;
        }
        for(int i=0; i<sn; i++) {
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        
        for(int count : hash){
            if(count!=0){
                return false;
            }
        }

        return true;
        
        
    }
};