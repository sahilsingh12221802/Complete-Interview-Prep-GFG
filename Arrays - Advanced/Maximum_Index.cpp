class Solution {
  public:
    int maxIndexDiff(vector<int>& arr) {
        int n = arr.size();
        vector<int> leftMin(n), rightMax(n);
        leftMin[0] = arr[0];
        for(int i=1;i<n;i++) leftMin[i] = min(arr[i], leftMin[i-1]);
        rightMax[n-1] = arr[n-1];
        for(int j=n-2;j>=0;j--) rightMax[j] = max(arr[j], rightMax[j+1]);
        int i=0, j=0, ans=0;
        while(i<n && j<n){
            if(leftMin[i] < rightMax[j]){
                ans = max(ans, j-i);
                j++;
            } else i++;
        }
        return ans;
    }
};
