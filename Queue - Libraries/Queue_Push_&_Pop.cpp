class Solution {
  public:
    queue<int> fillQ(const vector<int>& arr) {
        queue<int> q;
        for (int x : arr) {
            q.push(x);
        }
        return q;
    }

    void emptyQ(queue<int>& q) {
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
    }
};
