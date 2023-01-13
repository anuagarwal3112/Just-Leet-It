//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        int oc=0;
        int cc=0;
        int ans =0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                oc++;
            }
            else if(s[i] == ')'){
                oc--;
            }
            //if(oc==cc){
                ans = max(ans, oc);
                //oc=0;
                //cc=0;
            //}
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
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends