    #include<algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> setTry;
        int N = s.length();
        if(N==0) return 0;
        int max = 0;
        
        int i=0, j=0;
        
        while(i<N && j<N) {
            
            if(setTry.find(s[i]) != setTry.end()) {
                setTry.erase(s[j++]);
            } else {
                setTry.insert(s[i++]);
                max = max > (i-j) ? max : (i-j);
            }
            
        }
        
        return max;
        
    }
};

// while( i<n && j<n)
// 		{
// 			if(set.find(s[j]) == set.end()) //If the character does not in the set
// 			{
// 				set.insert(s[j++]); //Insert the character in set and update the j counter
// 				ans = max(ans, j-i); //Check if the new distance is longer than the current answer
// 			}
// 			else
// 			{
// 				set.erase(s[i++]); 
// 				/*If character does exist in the set, ie. it is a repeated character, 
// 				we update the left side counter i, and continue with the checking for substring. */
// 			}
// 		}
