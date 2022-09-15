class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector <int> fib(2, 1);
        int n = 2;
        int x = 0;
        while(x < k) {
            x = fib[n-1] + fib[n-2];
            fib.push_back(x);
            n++;
        }
        int cnt = 0;
        while(k) {
            int idx = upper_bound(fib.begin(), fib.end(), k) - fib.begin();
            cnt++;
            k -= fib[idx-1];
        }
        return cnt;
    }
};