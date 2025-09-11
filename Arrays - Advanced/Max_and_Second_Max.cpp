class Solution {
  public:
    vector<int> largestAndSecondLargest(vector<int> &arr) {
        int max1 = -1, max2 = -1;
        for (int x : arr) {
            if (x > max1) {
                max2 = max1;
                max1 = x;
            } else if (x < max1 && x > max2) {
                max2 = x;
            }
        }
        return {max1, max2};
    }
};
