// User function Template for C++

// vector<int> v: containing N elements
//  Find and return vector of elements containing
//  prime number at prime index
class Solution {
  public:
    bool isPrime(int n) {
        if(n < 2) return false;
        for(int i = 2; i * i <= n; ++i)
            if(n % i == 0) return false;
        return true;
    }
    vector<int> primeAtPrime(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> res;
        for(int i = 1; i < n; ++i) {
            if(isPrime(i + 1) && isPrime(arr[i]))
                res.push_back(arr[i]);
        }
        return res;
    }
};
