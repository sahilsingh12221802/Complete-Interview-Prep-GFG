class Solution {
  public:
    int getFirstSetBit(int n) {
        if (n == 0) return 0;
        return log2(n & -n) + 1;
    }
};
