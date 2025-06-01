void left_Rotate_Deq_ByK(deque<int> &dq, int k) {
    int n = dq.size();
    k = k % n;
    for (int i = 0; i < k; i++) {
        dq.push_back(dq.front());
        dq.pop_front();
    }
}

void right_Rotate_Deq_ByK(deque<int> &dq, int k) {
    int n = dq.size();
    k = k % n;
    for (int i = 0; i < k; i++) {
        dq.push_front(dq.back());
        dq.pop_back();
    }
}
