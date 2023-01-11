//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    
    bool check(string s1, string s2){
        map<char, char>mp;
        for(int i=0; i<s1.size(); i++){
            if(mp.find(s1[i]) != mp.end()){
                if(mp[s1[i]] != s2[i]) return false;   
            }
            else mp[s1[i]] = s2[i];
        }
        return true;
    }
    bool areIsomorphic(string str1, string str2)
    {
        int n = str1.size();
        int m = str2.size();
        if(n != m) return 0;
        
        return check(str1, str2) && check(str2, str1);
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends