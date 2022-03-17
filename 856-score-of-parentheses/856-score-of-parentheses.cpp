class Solution {
public:
    int scoreOfParentheses(string s) {
         stack<int> st;
    int curr = 0;
    
    for(char c: s) {
        if(c == '(') {
            st.push(curr);
            curr = 0;
        }
        else {
            curr += max(curr, 1) + st.top();
            st.pop();
        }
    }
    
    return curr;
    }
};