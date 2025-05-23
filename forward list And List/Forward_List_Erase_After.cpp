// User function Template for C++
// Complete the function
forward_list<int> eraseMe(forward_list<int> fwdlist) {
    // Your code here
    fwdlist.erase_after(fwdlist.begin());
    return fwdlist;
    // Use erase_after function
}
