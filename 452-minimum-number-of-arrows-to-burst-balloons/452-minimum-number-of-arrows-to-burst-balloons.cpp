class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        int n=points.size(),i,ans=1,cur;
        vector <pair<int,int>> a;
        for(i=0;i<n;i++)
        {
            a.push_back({points[i][1],points[i][0]});
        }
        sort(a.begin(),a.end());
        cur=a[0].first;
        for(i=1;i<n;i++)
        {
            if(a[i].second>cur)
            {
                cur=a[i].first;
                ans++;
            }
        }
        return ans;
    }
};