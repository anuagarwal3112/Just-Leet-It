//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mod=1e8;
    int fun(int N,vector<int>&dp){
        if(N==1 || N==2)return N;
        if(dp[N]!=-1) return dp[N];
        int l=fun(N-1,dp);
        int r=fun(N-2,dp);
        return dp[N]=(l+r)%mod;
    }
    int fillingBucket(int N) {
        vector<int>dp(N+1,-1);
        return fun(N,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends