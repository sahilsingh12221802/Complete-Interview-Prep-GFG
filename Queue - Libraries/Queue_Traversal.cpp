void TraveseMe(queue<int> myqueue) {
    while (!myqueue.empty()) {
        cout << myqueue.front();
        myqueue.pop();
    }
}
