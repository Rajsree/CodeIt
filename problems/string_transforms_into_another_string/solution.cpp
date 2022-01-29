class Solution {
public:
    bool canConvert(string str1, string str2) {
        if(str1 == str2) return true;
        int n = str1.size()-1;
        unordered_map<char,char> charMap;
         unordered_set<char> uniqueCharactersInStr2;
        
        for(int i=0; i<=n;i++) {
            if(charMap.find(str1[i])!=charMap.end() && charMap[str1[i]]!=str2[i]) {
                return false;
            } else {
                 charMap[str1[i]] = str2[i];
                 uniqueCharactersInStr2.insert(str2[i]);
            }
           
        }
        
         if (uniqueCharactersInStr2.size() < 26) {
            return true;
        }
        return false;
        
    }
};