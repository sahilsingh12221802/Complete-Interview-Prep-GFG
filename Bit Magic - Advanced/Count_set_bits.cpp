class Solution {
  public:
    int largestPowerOf2(int n) {
        int x = 0;
        while ((1 << (x + 1)) <= n) x++;
        return x;
    }
    
    int countSetBits(int n) {
        if (n == 0) return 0;
        int x = largestPowerOf2(n);
        int bitsUpTo2x = x * (1 << (x - 1));
        int msbFrom2xToN = n - (1 << x) + 1;
        int rest = countSetBits(n - (1 << x));
        return bitsUpTo2x + msbFrom2xToN + rest;
    }
};
