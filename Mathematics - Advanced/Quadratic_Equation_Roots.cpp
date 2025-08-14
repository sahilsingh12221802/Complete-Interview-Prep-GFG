class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> res;
        int d = b*b - 4*a*c;
        if(d < 0) return {-1};
        double root1 = floor((-b + sqrt(d)) / (2.0 * a));
        double root2 = floor((-b - sqrt(d)) / (2.0 * a));
        if(root1 >= root2) res = {int(root1), int(root2)};
        else res = {int(root2), int(root1)};
        return res;
    }
};
