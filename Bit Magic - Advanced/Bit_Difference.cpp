class Solution {
  public:
    int countBitsFlip(int a, int b) {
        int x = a ^ b;
        int count = 0;
        while (x) {
            count += (x & 1);
            x >>= 1;
        }
        return count;
    }
};
