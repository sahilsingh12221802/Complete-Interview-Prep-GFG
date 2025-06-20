void push(priority_queue<int, vector<int>, greater<int>> &pq, int x) {
    pq.push(x);
    cout << pq.size() << endl;
}

void pop(priority_queue<int, vector<int>, greater<int>> &pq) {
    if (!pq.empty()) {
        pq.pop();
        cout << pq.size() << endl;
    } else return;
}

int top(priority_queue<int, vector<int>, greater<int>> &pq) {
    if (!pq.empty())
        return pq.top();
    else return -1;
}
