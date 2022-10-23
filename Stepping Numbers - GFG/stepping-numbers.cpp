//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
void dfs(int &count, int a, int b, int start){
        if(start > b) 
            return;
        if(start >= a and start <= b)
            count++;
        int r = start % 10;
        if(r != 9)
            dfs(count, a, b, start*10 + (r+1));
        if(r != 0)
            dfs(count, a, b, start*10 + (r-1));
    
        return;
    }
public: 
    int steppingNumbers(int n, int m){ 
        // Code Here
        int count = 0;
        for(int i = 1; i <= 9; i++)
            dfs(count, n, m, i);
        if(n)
            return count;
        else
            return count+1;
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends