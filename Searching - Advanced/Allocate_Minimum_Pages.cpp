class Solution {
  public:
    bool isPossible(vector<int> &arr, int k, int mid) {
        int students = 1, sum = 0;
        for (int pages : arr) {
            if (pages > mid) return false;
            if (sum + pages > mid) {
                students++;
                sum = pages;
                if (students > k) return false;
            } else {
                sum += pages;
            }
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        if (k > arr.size()) return -1;
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
