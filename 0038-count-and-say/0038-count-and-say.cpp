class Solution {
public:
    string countAndSay(int n) {
        // base case of recursion
        if(n==1) return "1";
        // Recursion
        string s=countAndSay(n-1);
        string res;
        int freq=0; 
       
        for(int i=0;i<s.size();i++)
        {
            freq++;
            // i = n phle liikha h to or ke bad nahi chalega to segmentation fault nahi aaygi
            // agar bad me likhte to aati seg. fault
            if(i==s.size()-1 || s[i]!=s[i+1])
            {
                // res = frequency of that element (change int into stirng) + that element 
               res=res+to_string(freq)+s[i];
                // reset the frequency to 0 for next char
               freq=0;
            }
        }
        return res;    
    }
};