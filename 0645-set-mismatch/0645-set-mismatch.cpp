class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // Create distinct vector
        set<int> distinct1{nums.begin(), nums.end()};
        vector<int> distinct{distinct1.begin(), distinct1.end()};
        
        int missing = distinct.size(), duplicate = 0, n = nums.size();
        
        // Find missing number
        for (int i = 0; i < n-1; i++)
            missing ^= i ^ distinct[i];
        missing ^= n;
        
        // Find duplicate number
        for (int i = 0; i < n-1; i++) {
            duplicate ^= nums[i] ^ distinct[i];
        }
        duplicate ^= nums[n-1];
        
        return {duplicate, missing};
    }
};