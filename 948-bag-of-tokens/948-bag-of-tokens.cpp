class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int points = 0;
        sort(tokens.begin(), tokens.end());
        int l = 0;
        int r = tokens.size()-1;
        int ans = 0;
        while(l<=r && (power>=tokens[l] || points > 0)){
            while(l<=r && power>=tokens[l]){
                power -= tokens[l];
                points++;
                l++;
            }
            ans = max(ans, points);
            if(l<=r && points>0){
                power += tokens[r];
                points--;
                r--;
            }
        } 
        return ans;
    }
};