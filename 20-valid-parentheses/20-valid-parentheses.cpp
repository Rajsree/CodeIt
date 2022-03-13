class Solution {
public:
    stack<char> st;
    unordered_map<char,char> hash = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
    bool isValid(string s) {
        int i=0;
        while(i<s.length()) {
         
            char top = st.empty() ? '#' : st.top();
            
            if(s[i] == hash[top]){
                st.pop();
            } else {
             st.push(s[i]);   
            }            
            
            i++;
        }

        return st.empty();
    }
};