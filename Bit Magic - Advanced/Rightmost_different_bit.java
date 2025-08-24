class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        if(m == n) return -1;
        int x = m ^ n;
        int pos = 1;
        while((x & 1) == 0) {
            x >>= 1;
            pos++;
        }
        return pos;
    }
};
