class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans="";
        for(auto it:s) {
            if(!st.empty() && st.top() == it) st.pop();
            else st.push(it);
        }

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};