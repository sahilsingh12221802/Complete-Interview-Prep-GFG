class Solution {
  public:
    int digitalRoot(int n) {
        if (n == 0) return 0;
        return (n % 9 == 0) ? 9 : (n % 9);
    }
};
