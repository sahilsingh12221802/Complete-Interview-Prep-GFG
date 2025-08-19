class Solution {
  public:
    int exactly3Divisors(int n) {
        int count = 0;
        for (long long i = 2; i * i <= n; i++) {
            bool prime = true;
            for (long long j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime && i * i <= n) count++;
        }
        return count;
    }
};
