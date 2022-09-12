class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int total = 0;
        sort(people.begin(), people.end());
        int l=0;
        int r = people.size() - 1;
        while(l<=r){
            if(people[l]+people[r] <= limit){
                l++;
                r--;
                total++;
            }
            else{
                r--;
                total++;
            }
        }
        return total;
    }
};