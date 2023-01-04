//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int v[], int n, int x) {
    sort(v, v+n);
        int f = -1, c = -1;
        int low = 0, high = n-1;
        
        while(low<=high) {
            int mid = low + (high-low)/2;
            if(v[mid] == x){
                f = v[mid];
                c = v[mid];
                break;
            }
            else if(v[mid]<x){
                f = v[mid];
                low = mid+1;
            }
            else if(v[mid]>x){
                c = v[mid];
                high = mid-1;
            }
        }
        pair<int, int> ans;
        ans.first = f;
        ans.second = c;
        return ans;
}