//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& arr, int key) {
        int l =0;
        int h = arr.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid] == key) return true;
            if((arr[l] == arr[mid]) && (arr[h] == arr[mid]))
            {
                l++;
                h--;
            }
            // left half is sorted
            else if(arr[mid] >= arr[l] ){
                if(arr[l] <= key && arr[mid] >= key) h = mid-1;
                else l = mid+1;
            }
            // right half is sorted
            else{
                if(arr[h] >= key && arr[mid] <= key) l = mid+1;
                else h = mid-1;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends