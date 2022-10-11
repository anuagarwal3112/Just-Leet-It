class Solution {
public:
// low<mid<high
// our intension is that make low smaller as can possible
// make mid smaller as can possible but it should be greater than low
// if we found any element greater than mid than we get triplet
// 1.Traverse whole array
// 2.if nums[i] <low means we can update low bcz we found new low .
// 3.if nums[i] >low && nums[i]<mid it will be new mid
// 4.if nums[i] >mid it means nums[i] is largest than mid and it is als greater than low
// so we get nums[i] as high so return true

        bool increasingTriplet(vector<int>& nums) {
            int n = nums.size();
            if(n<3) return false;
            int low = INT_MAX;
            int mid = INT_MAX;
            for(int i=0; i<n; i++){
                int x = nums[i];
                if(x>mid) return true;
                else if(x<low) low = x;
                else if(x>low && x<mid) mid = x;
            }
            return false;;
        }
};