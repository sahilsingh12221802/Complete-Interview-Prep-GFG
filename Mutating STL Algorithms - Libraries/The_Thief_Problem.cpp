class Solution {
  public:
    int getMaxVal(vector<int> arr, int n, int k) {
        priority_queue<int> pq(arr.begin(), arr.end());
        int sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};
