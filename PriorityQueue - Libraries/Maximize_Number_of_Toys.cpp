class Solution {
  public:
    int maxToys(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int count = 0, sum = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(sum + arr[i] <= k) {
                sum += arr[i];
                count++;
            } else {
                break;
            }
        }
        return count;
    }
};
