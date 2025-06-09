class Solution {
    stack<int> s, minS;
  public:
    Solution() {}

    void push(int x) {
        s.push(x);
        if (minS.empty() || x <= minS.top()) minS.push(x);
    }

    void pop() {
        if (!s.empty()) {
            if (s.top() == minS.top()) minS.pop();
            s.pop();
        }
    }

    int peek() {
        if (s.empty()) return -1;
        return s.top();
    }

    int getMin() {
        if (minS.empty()) return -1;
        return minS.top();
    }
};

