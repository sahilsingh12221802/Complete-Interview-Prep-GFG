class Solution {
  public:
    int modmul(int a, int b, int M) {
        long long res = (1LL * a * b) % M;
        return (int)res;
    }
};
