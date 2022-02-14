class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> strmap;
        for(string s : strs) {
            string temp = s;
            sort(s.begin(),s.end());
            strmap[s].push_back(temp);
        }
        vector<vector<string>> anagrams;
        for(auto it: strmap) {
            anagrams.push_back(it.second);
        }
        
        return anagrams;
    }
};