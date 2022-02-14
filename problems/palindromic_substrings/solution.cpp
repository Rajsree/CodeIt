class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int ans = 0;
        string substr = "";
        for(int lo=0; lo<n; lo++) {
            for(int hi=lo; hi<n; hi++) {
                ans += isPalindrome(s, lo, hi);
            }
        }
        return ans;        
    }
    
//     int helper(string s, int i, int n, int count, string substr) {
//         if(i==n) {
//             if(isPalindrome(substr)) {
//                 return 1;
//             }
//             return 0;
//         }
       

//         substr+=s[i];
//         int pick = helper(s, i+1, n, count, substr);
//         substr.pop_back();
        
//         int nopick = helper(s, i+1, n, count, substr);
        
//         return pick+nopick;
//     }
    
    
    bool isPalindrome(string s, int lo, int hi) {
        int i=lo, j=hi;
        
        while(i<j) {
            if(s[i++]!=s[j--]) {
                return false;
            }           
        }
        return true;
    }
};