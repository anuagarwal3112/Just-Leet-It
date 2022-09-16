class Solution {
public:
    int solve(vector<int> &nums,vector<int> &m,int l,int i,vector<vector<long long int>> &dp){
        
        if(i==m.size()){
            return 0;
        }
        if(dp[l][i]!=INT_MIN){
            return dp[l][i];
        }
        
        int n=nums.size();
        int r=n-1-(i-l);
        
        long long int first=(long long )nums[l]*(long long)m[i]+solve(nums,m,l+1,i+1,dp);
        long long int last=(long long )nums[r]*(long long)m[i]+solve(nums,m,l,i+1,dp);
        
        return dp[l][i]=max(first,last);
        
    }
    int maximumScore(vector<int>& nums, vector<int>& m) {
        
        // n-1-(i-j);
        
        vector<vector<long long int>> dp(m.size()+1,vector<long long int>(m.size()+1,INT_MIN));
        
        return solve(nums,m,0,0,dp);
        
    }
};