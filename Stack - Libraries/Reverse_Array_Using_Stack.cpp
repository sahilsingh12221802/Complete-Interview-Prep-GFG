// User function Template for C++

// Complete this function
class Solution {
  public:
    void reverseArray(int n, int* arr) {

        // Your code here
        stack<int> st;
        for(int i = 0; i < n; i++) st.push(arr[i]);
        for(int i = 0; i < n; i++) {
            arr[i] = st.top();
            st.pop();
        }

        // Reverse the array
    }
};
