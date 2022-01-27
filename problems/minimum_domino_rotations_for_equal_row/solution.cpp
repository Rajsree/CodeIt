class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        vector<int> countTops(7), countBottoms(7), same(7);
        int count = 0;
        for(int i=0; i<n; i++) {
            countTops[tops[i]]++;
            countBottoms[bottoms[i]]++;
            if(countTops[tops[i]]==n) return 0;
            if(countBottoms[bottoms[i]]==n) return 0;
            if(tops[i] == bottoms[i]) same[tops[i]]++;
        }
        for(int i=1; i<7; i++) {
           
            if(countTops[i]+countBottoms[i]-same[i] == n) {
                return n - max(countBottoms[i], countTops[i]);
            } 
        }
        return -1;
        
    }
};




//My original sol
  /*      int count = -1;
        int maxOccuranceinTop;
        int maxOccuranceinBottom;
    
        unordered_map<int,int> topMap;
        unordered_map<int,int> bottomMap;
        for(int i: tops) {
            topMap[i]++;
        }
        for(int j:bottoms) {
            bottomMap[j]++;
        }
        
         int maxcountTop = 0;
        for(auto it: topMap) {          
            if(it.second>maxcountTop) {
                maxcountTop = it.second;
                maxOccuranceinTop = it.first;
            }
        }
        
        int maxcountBottom = 0;
       for(auto it: bottomMap) {   
            if(it.second>maxcountBottom) {
                maxcountBottom = it.second;
                maxOccuranceinBottom = it.first;
            }
        }
        
        if((maxcountTop==tops.size()) || (maxcountBottom== bottoms.size())) return 0;
        int toMatch = maxcountTop >= maxcountBottom ? maxOccuranceinTop : maxOccuranceinBottom;
        
        if(maxcountTop >= maxcountBottom) {
            for(int i=0; i<tops.size(); i++) {
                if((toMatch == tops[i]) || (toMatch == bottoms[i])) {
                    if(toMatch != tops[i]) count++;
                } else {
                    return -1;
                }
            }
        } else {
             for(int i=0; i<bottoms.size(); i++) {
                if((toMatch == bottoms[i]) || (toMatch == tops[i])) {
                    if(toMatch != bottoms[i]) count++;
                } else {
                    return -1;
                }
            }
        }
        if(count >= 0)  return count+1;
        return -1;*/