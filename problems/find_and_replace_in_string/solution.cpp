class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        vector<pair<int,int>> sorted;
        for(int i=0; i<indices.size(); i++){
            sorted.push_back({indices[i], i});
        }
        sort(sorted.rbegin(), sorted.rend());
        
        for(auto it: sorted) {
            int i = it.first;
            string src = sources[it.second], t = targets[it.second];
            
            if(s.substr(i, src.length()) == src) {
                s = s.substr(0,i) + t + s.substr(i+src.length());
            }
        }
        return s;
        //        if (S.substr(i, src.length()) == src)
        //         S = S.substr(0, i) + t + S.substr(i + src.length());
        // }
        // return S;
        
    }
};

//O(NlogN) + s