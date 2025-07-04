class Solution {
  public:
    int kthSmallest(int arr[], int n, int k) {
        priority_queue<int> pq;
        for(int i = 0; i < n; i++) {
            pq.push(arr[i]);
            if(pq.size() > k)
                pq.pop();
        }
        return pq.top();
    }
};
