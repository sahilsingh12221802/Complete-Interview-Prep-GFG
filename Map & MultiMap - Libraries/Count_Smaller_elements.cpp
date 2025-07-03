#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        vector<int> res(n), temp;
        vector<pair<int, int>> vec(n);
        for(int i = 0; i < n; i++) vec[i] = {arr[i], i};
        
        function<void(int, int)> mergeSort = [&](int l, int r) {
            if (l >= r) return;
            int m = l + (r - l) / 2;
            mergeSort(l, m);
            mergeSort(m + 1, r);
            vector<pair<int, int>> merged(r - l + 1);
            int i = l, j = m + 1, k = 0, count = 0;
            while (i <= m && j <= r) {
                if (vec[i].first > vec[j].first) {
                    count++;
                    merged[k++] = vec[j++];
                } else {
                    res[vec[i].second] += count;
                    merged[k++] = vec[i++];
                }
            }
            while (i <= m) {
                res[vec[i].second] += count;
                merged[k++] = vec[i++];
            }
            while (j <= r) merged[k++] = vec[j++];
            for (int t = 0; t < merged.size(); t++) vec[l + t] = merged[t];
        };
        
        mergeSort(0, n - 1);
        return res;
    }
};
