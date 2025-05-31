// Function to erase the element from specified position X in deque.
void eraseAt(deque<int> &deq, int x) {
    // Your code here
    deq.erase(deq.begin() + x);
}

// Function to erase the elements in range start (inclusive), end (exclusive).
void eraseInRange(deque<int> &deq, int start, int end) {
    if(start == end) return;
    // Your code here
    deq.erase(deq.begin() + start, deq.begin() + end);
}

// Function to erase all the elements in the deque.
    
void eraseAll(deque<int> &deq) {
    // Your code here
    deq.clear();
}
