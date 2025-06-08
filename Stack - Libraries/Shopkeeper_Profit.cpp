class Solution {
  public:
    int profit(vector<int>& arr) {
        int n = arr.size();
        vector<int> next_greater(n, -1);
        stack<int> st;
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                next_greater[i] = st.top();
            }
            st.push(i);
        }
        int total = 0;
        for (int i = 0; i < n; ++i) {
            if (next_greater[i] == -1) total += arr[i];
            else total += (arr[next_greater[i]] - arr[i]);
        }
        return total;
    }
};
