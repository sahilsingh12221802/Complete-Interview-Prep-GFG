class Solution {
  public:
    void freqSorted(vector<int>& arr) {
        map<int, int> freq;
        for(int x : arr) freq[x]++;
        for(auto& p : freq) cout << p.first << " " << p.second << "\n";
    }
};
