//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int stringComparsion(string s1, string s2);


int main() 
{


   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s1, s2;
   		cin >> s1 >> s2;

   		
   		cout << stringComparsion(s1, s2) << "\n";
   	}

    return 0;
}

// } Driver Code Ends




string helper(string &s){
    string a;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i] == 'n' && s[i+1] == 'g'){
            a += 'o';
            i++;
        }
        else if(s[i]>='o')
            a += s[i]+1;
        else
            a += s[i];
    }
    return a;
}

int stringComparsion(string s1,string s2)
{
    string a = helper(s1), b = helper(s2);
    return a == b ? 0 : a > b ? 1 : -1;
}