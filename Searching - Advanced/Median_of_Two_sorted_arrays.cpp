class Solution {
  public:
    int findMedian(int arr[], int n, int brr[], int m) {
        if (n > m) return findMedian(brr, m, arr, n);
        int low = 0, high = n, total = n + m;
        while (low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = (total + 1) / 2 - cut1;
            int l1 = (cut1 == 0) ? INT_MIN : arr[cut1 - 1];
            int l2 = (cut2 == 0) ? INT_MIN : brr[cut2 - 1];
            int r1 = (cut1 == n) ? INT_MAX : arr[cut1];
            int r2 = (cut2 == m) ? INT_MAX : brr[cut2];
            if (l1 <= r2 && l2 <= r1) {
                if (total % 2 == 0)
                    return floor((max(l1, l2) + min(r1, r2)) / 2.0);
                else
                    return max(l1, l2);
            } else if (l1 > r2)
                high = cut1 - 1;
            else
                low = cut1 + 1;
        }
        return 0;
    }
};
