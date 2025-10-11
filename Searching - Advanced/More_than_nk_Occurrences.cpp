class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> freq;
        for (int num : arr) freq[num]++;
        int count = 0;
        for (auto& p : freq) {
            if (p.second > n / k) count++;
        }
        return count;
    }
};
