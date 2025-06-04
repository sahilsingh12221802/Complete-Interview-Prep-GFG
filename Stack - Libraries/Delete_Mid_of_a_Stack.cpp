class Solution {
  public:
    void solve(stack<int>& s, int curr, int mid) {
        if (curr == mid) {
            s.pop();
            return;
        }
        int temp = s.top();
        s.pop();
        solve(s, curr + 1, mid);
        s.push(temp);
    }

    void deleteMid(stack<int>& s) {
        int n = s.size();
        int mid = n / 2;
        solve(s, 0, mid);
    }
};
