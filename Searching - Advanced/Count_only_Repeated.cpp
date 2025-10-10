class Solution {
  public:
    vector<int> findRepeating(vector<int>& arr) {
        int n = arr.size();
        for(int i = 1; i < n; i++) {
            if(arr[i] == arr[i-1]) {
                int cnt = 2;
                while(i+1 < n && arr[i+1] == arr[i]) {
                    cnt++;
                    i++;
                }
                return {arr[i], cnt};
            }
        }
        return {-1, -1};
    }
};
