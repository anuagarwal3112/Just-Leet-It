//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool possible(int dis, int cows, vector<int> &stalls){
        int cowcor = stalls[0];
        int c = 1;
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i] - cowcor >= dis){
                c++;
                cowcor = stalls[i];
            }
            if(c == cows) return true;
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(), stalls.end());
        int ans = -1;
        int l=1;
        int h=stalls[n-1] - stalls[0];
        while(l<=h){
            int mid = l + (h-l)/2;
            if(possible(mid, k, stalls)){
                ans = mid;
                l = mid+1;
            }
            else h = mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends