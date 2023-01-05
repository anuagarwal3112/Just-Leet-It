//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int f=-1, l=-1;
        int s = 0;
        int e = n-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(arr[m]==x){
                f=m;
                e=m-1;
            }
            else if(arr[m] > x) e = m-1;
            else s = m+1;
        }
        
        s = 0;
        e = n-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(arr[m]==x){
                l=m;
                s=m+1;
            }
            else if(arr[m] > x) e = m-1;
            else s = m+1;
        }
        int ans =0;
        if(f != -1 && l != -1){
            ans = l-f+1;
        }
        return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends