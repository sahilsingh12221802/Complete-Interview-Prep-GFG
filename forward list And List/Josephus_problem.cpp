/*You are required to complete this method */

class Solution {
  public:
    int josephus(int n, int k) {
        // Your code here
        if(n == 1) return 1;
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
};
