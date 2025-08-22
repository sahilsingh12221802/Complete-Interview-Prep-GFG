class Solution {
  public:
    int modInverse(int n, int m) {
        int a = n, b = m, x0 = 1, x1 = 0;
        while (b) {
            int q = a / b;
            int t = b;
            b = a % b;
            a = t;
            t = x1;
            x1 = x0 - q * x1;
            x0 = t;
        }
        if (a != 1) return -1;
        if (x0 < 0) x0 += m;
        return x0;
    }
};
