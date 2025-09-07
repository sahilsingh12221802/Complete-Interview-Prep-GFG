class Solution {
  public:
    int reverseExponentiation(int n) {
        int r = 0, t = n;
        while (t > 0) { 
            r = r * 10 + t % 10; 
            t /= 10; 
        }
        long long base = n, res = 1;
        int exp = r;
        while (exp > 0) {
            if (exp & 1) res *= base;
            base *= base;
            exp >>= 1;
        }
        return (int)res;
    }
};
