class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            if(st.find(s[i]) != st.end()){
                ans++;
                st.clear();
                st.insert(s[i]);
            }
            else{
                st.insert(s[i]);
            }
        }
        return ans+1;
    }
};