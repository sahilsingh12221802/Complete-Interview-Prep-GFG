class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        unordered_set<int> s(a.begin(), a.end());
        int count = 0;
        for(int x : b) {
            if(s.count(x)) {
                count++;
                s.erase(x);
            }
        }
        return count;
    }
};
