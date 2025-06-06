stack<int> _push(int arr[], int n) {
    stack<int> s, minStack;
    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
        if (minStack.empty() || arr[i] <= minStack.top())
            minStack.push(arr[i]);
        else
            minStack.push(minStack.top());
    }
    return minStack;
}

void _getMinAtPop(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}
