class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans=0;
        int lg=0, lm=0, lp=0;
        for(int i=1; i<travel.size(); i++)  travel[i]  = travel[i] + travel[i-1];
        
        for(int i=0; i<garbage.size();  i++){
            for(auto it:garbage[i]){
                if(it == 'M') lm = i;
                else if(it == 'P') lp = i;
                else if(it == 'G') lg = i;
                ans++;
            }
        }
        if(lm>0) ans += travel[lm-1];
        if(lp>0) ans += travel[lp-1];
        if(lg>0) ans += travel[lg-1];
        
        return ans;
    }
};