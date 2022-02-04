class Solution {
public:
    unordered_map<char,int> hash; //char : least value of integet presence
    int maxlen = -1;
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.length();
        for(int i=0; i<n; i++){
            if(hash.find(s[i]) != hash.end()) {
                int len = i-hash[s[i]]-1;
                maxlen = max(len,maxlen);
            } else{
                hash[s[i]] = i;
            }
        }
        return maxlen; 
    }
   
};