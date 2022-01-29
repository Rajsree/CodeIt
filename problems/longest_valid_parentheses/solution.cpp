class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        if(n<=0) return 0;
        stack<int> st;
        int maxLen = 0;
        st.push(-1);
        for(int i=0; i<n; i++) {
              if(s[i] == '(') {
                  st.push(i);
              } else {
                  st.pop();
                  if(!st.empty()) {
                      int length = i-st.top();
                      maxLen = max(length,maxLen); 
                  } else {
                      st.push(i);
                  }
                 
              }
    
        }
        
        return maxLen;
    }
    

};