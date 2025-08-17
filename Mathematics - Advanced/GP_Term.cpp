class Solution {
  public:
    double termOfGP(int a, int b, int n) {
        double r = (double)b / a;
        return a * pow(r, n - 1);
    }
};
