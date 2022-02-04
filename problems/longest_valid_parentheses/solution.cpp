class Solution {
public:
    int longestValidParentheses(string s) {
        int n= s.size()-1;
        if(n<=0) return 0;
        
        int maximumlen = 0;
        stack<int> stack1;
        stack1.push(-1);
        
        for(int i=0; i<=n; i++) {
            if(s[i] == '(') {
                stack1.push(i);
            } else {
                stack1.pop();
                if(!stack1.empty()) {
                    maximumlen = max(maximumlen, i-stack1.top() );
                    
                } else {
                    stack1.push(i);
                }
                
            }
            
        }

        return maximumlen;
    }
};