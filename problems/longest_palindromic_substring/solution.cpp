class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int strlen = 0;
        string str = "";
       
        
        if(n==0) {
            return s;
        }
        
        bool dp[n][n];
        
        for(int j=0; j<n; j++) {
            for(int i=0; i<=j; i++) {
                bool judge = s[i] == s[j];
                
                dp[i][j] = j-i>2 ? dp[i+1][j-1] && judge : judge;
                
                if(dp[i][j] && j-i+1 > strlen) {
                    strlen = j-i+1;
                    str = s.substr(i,strlen);
                }
            }
        }
        
        return str;
    }
};