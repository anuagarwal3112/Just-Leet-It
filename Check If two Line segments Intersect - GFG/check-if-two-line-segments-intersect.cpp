//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int orient(int a[], int b[], int c[]) {
        int x = (b[1] - a[1]) * (c[0] - b[0]) - (b[0] - a[0]) * (c[1] - b[1]);
        if(x == 0) return 0;
        return (x > 0) ? 1 : 2;
    }

    bool projection(int a, int b, int c, int d) {
        if(a > b) swap(a, b);
        if(c > d) swap(c, d);
        return max(a, c) <= min(b, d);
    }
    
    int doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        int o1 = orient(p1, q1, p2);
        int o2 = orient(p1, q1, q2);
        int o3 = orient(p2, q2, p1);
        int o4 = orient(p2, q2, q1);
        
        if(o1 != o2 && o3 != o4) return true;
        
        if(o1 == 0 && o4 == 0) {
            int x = projection(p1[0], q1[0], p2[0], q2[0]);
            int y = projection(p1[1], q1[1], p2[1], q2[1]);
            return x & y;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1[2], q1[2], p2[2], q2[2];
        cin >> p1[0] >> p1[1] >> q1[0] >> q1[1] >> p2[0] >> p2[1] >> q2[0] >>
            q2[1];
        Solution ob;
        cout << ob.doIntersect(p1, q1, p2, q2) << "\n";
    }
}
// } Driver Code Ends