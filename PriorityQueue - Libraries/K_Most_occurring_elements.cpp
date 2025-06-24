class Solution {
  public:
    int kMostFrequent(int arr[], int n, int k) {
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        vector<int> counts;
        for (auto &entry : freq) {
            counts.push_back(entry.second);
        }
        sort(counts.begin(), counts.end(), greater<int>());
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += counts[i];
        }
        return sum;
    }
};
