class Solution {
  public:
    int setBitCount(int n) {
        return __builtin_popcount(n);
    }
};
