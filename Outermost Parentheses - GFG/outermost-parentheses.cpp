//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        int oc=0;
        int cc=0;
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                if(oc != 0){
                    ans += s[i];
                }
                oc++;
            }
            else{
                if((oc - cc) > 1){
                    ans += s[i];
                }
                cc++;
            }
            if(oc==cc){
                oc=0;
                cc=0;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends