class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
      
        for(int i=1;i<=n;i++){
            string curr="";
            if(i%3==0){
                curr+="Fizz";
            }
            if(i%5==0){
                curr+="Buzz"; 
            }
            if(curr==""){
                curr+=to_string(i);
            }
            s.push_back(curr);
        }
        return s;
    }
};