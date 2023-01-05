//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
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
    
    vector<int> ans;
    ans.push_back(f);
    ans.push_back(l);
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends