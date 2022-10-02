class Solution {
public:
        #define MOD 1000000007
    long long solveMemo(int f, int d, int t, vector<vector<long long>> &dp){
        if(t<0) return 0;
        if(d==0 && t != 0) return 0;
        if(t==0 && d!=0) return 0;
        if(d==0 && t==0) return 1;
        
        if(dp[d][t] != -1) return dp[d][t];
        
        long long ans = 0;
        for(int i=1; i<=f; i++){
            ans = (ans%MOD + solveMemo(f, d-1, t-i, dp)%MOD)%MOD;
        }
        return dp[d][t] = ans;
    }
    // long long noOfWays(int f , int d , int t) {
    //     vector<vector<long long>> dp(d+1, vector<long long>(t+1, -1));
    //     return solveMemo(f, d, t, dp);
    // }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<long long>> dp(n+1, vector<long long>(target+1, -1));
        return solveMemo(k, n, target, dp);

    }
};