//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int nums[], int n, int x)
    {
        int ans=nums[0];
        sort(nums,nums+n); 
        int r = INT_MAX;
        for(int i=0;i<n;i++){
            int tgt = x-nums[i];
            int l=i+1;
            int h=n-1;  
            while(l<h){
                if(abs(nums[l] + nums[h] - tgt) < r){
                    r = abs(nums[l] + nums[h] - tgt);
                    ans = nums[l] + nums[h] + nums[i];
                }
                if(nums[l]+nums[h]==tgt){
                    return x;
                }
                else if(nums[l]+nums[h]<tgt){
                    l++;
                }
                else{
                    h--;
                }
            }
        }   
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends