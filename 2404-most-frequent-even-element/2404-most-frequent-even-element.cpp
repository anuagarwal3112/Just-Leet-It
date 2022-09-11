class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans = -1;
        int freq = INT_MIN;
        map<int,int>mp;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]%2 == 0)
            {
                mp[nums[i]]++;
            }
        }
        for(auto i:mp)
        {
            if(freq<i.second)
            {
                freq = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};