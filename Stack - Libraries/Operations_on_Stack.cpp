// User function Template for C++

// Function to push an element into the stack.
void insert(stack<int> &s, int x) {
    // Your code here
    s.push(x);
}

// Function to remove top element from stack.
void remove(stack<int> &s) {

    if(!s.empty()) s.pop();
    // Your code here
}

// Function to print the top element of stack.
void headOf_Stack(stack<int> &s) {
    int x = s.top();// Your code here
        cout << x << " " << endl;
}

// Function to search an element in the stack.
bool find(stack<int> s, int val) {
    bool exists = false;
    while(!s.empty()) {
        if(s.top() == val) {
            exists = true;
            break;
        }
        s.pop();
    }
    return exists;
}
