//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int count(int arr[], int mid, int n){
        int day=1;
        int sum=0;
        for(int i=0; i<n; i++){
            if(arr[i] <= (mid - sum)){
                sum += arr[i];
            }
            else{
                sum=arr[i];
                day++;
            }
        }
        return day;
    }
    int leastWeightCapacity(int arr[], int N, int D) {
        int maxi=INT_MIN, sum=0;
        for(int i=0; i<N; i++){
            maxi = max(maxi, arr[i]);
            sum += arr[i];
        }
        int l=maxi;
        int h=sum;
        int ans=0;
        while(l<=h){
            int mid =  l + (h-l)/2;
            int day = count(arr, mid, N);
            if(day<=D){
                ans= mid;
                h = mid-1;
            }
            else l = mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends