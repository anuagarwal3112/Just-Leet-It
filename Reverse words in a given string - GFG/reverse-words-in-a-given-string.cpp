//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        stack<string> st;
        string ans = "";
        string temp = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == '.'){
                st.push(temp);
                temp = "";
            } 
            else temp += s[i];
        }
        if(temp != "") st.push(temp);
        
        while(st.size()>1){
            ans += st.top();
            ans += '.';
            st.pop();
        }
        ans += st.top();
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends