class Solution {
public:
    stack<int> push(vector<int> &arr) {
        stack<int> s;
        for (int i = 0; i < arr.size(); i++) {
            s.push(arr[i]);
        }
        return s;
    }

    void pop(stack<int> s) {
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
    }
};
