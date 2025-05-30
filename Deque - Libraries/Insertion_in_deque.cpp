class Solution {
  public:
    deque<int> dqInsertion(const vector<int>& arr) {
        // code here
        deque<int> dq;
        for(int val : arr) dq.push_back(val);
        return dq;
    }
};
