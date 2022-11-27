//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    
        int i, j, start, end;
        long long sum, maxi;
        start = end = i = j = sum = maxi = 0;
    
        while(j < n) {
            if(a[j] >= 0) {
                sum += a[j];
                if(sum >= maxi) {
                    start = i;
                    end = j;
                    maxi = sum;
                }
            }
            else {
                sum = 0;
                i = j + 1;
            }
            j++;
        }
    
        if(start == end && a[start] < 0){
            return {-1};
        }
        vector<int> v;
        for(int i = start; i <= end; i++) {
            v.push_back(a[i]);
        }
        return v;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends