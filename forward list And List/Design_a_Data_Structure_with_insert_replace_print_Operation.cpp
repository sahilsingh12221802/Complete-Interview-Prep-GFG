// User function Template for C++

list<int> l;

// inserts an integer at the end of the data structure.
void insert(int x) {
    l.push_back(x);
}

// prints the element of the data structure
// the new line is given by the driver's code
void print() {
    // print the list
    for(int val : l) cout << val << " ";
    cout << endl;
}

// replaces the first occurence of x with
// sequence.
void replace(int x, vector<int> sequence) {
    for(auto it = l.begin(); it != l.end(); ++it) {
        if(*it == x) {
            it = l.erase(it);
            l.insert(it, sequence.begin(), sequence.end());
            break;
        }
    }
}
