class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int len=s.length();
        stack<char> st;
        int i=0;
        
        while(i<len){
            while(i<len && s[i]!=' '){
                st.push(s[i]);
                i++;
            }
            if(s[i]==' '){
                while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                } 
                ans+=' ';
                i++;
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;    
    }
};