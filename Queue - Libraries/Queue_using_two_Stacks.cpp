void StackQueue::push(int B) {
    s1.push(B);
}

int StackQueue::pop() {
    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    if (s2.empty()) return -1;
    int top = s2.top();
    s2.pop();
    return top;
}
