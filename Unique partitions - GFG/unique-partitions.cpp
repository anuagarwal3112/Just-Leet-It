//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
    vector<vector<int>>ans;
	void solve(int n , vector<int>&v , int pre){
	   if(n == 0) ans.push_back(v);
	   
	   for(int i = min(n , pre) ; i>=1 ; i--){
	        v.push_back(i);
	        solve(n - i , v , i);
	        v.pop_back();
	    }
	}
    vector<vector<int>> UniquePartitions(int n) {
        vector<int>v;
        solve(n , v , n+1);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends