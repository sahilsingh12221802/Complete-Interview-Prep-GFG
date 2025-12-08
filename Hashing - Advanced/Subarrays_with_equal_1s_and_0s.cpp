class Solution {
  public:
    int countSubarray(vector<int>& arr) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0, count = 0;
        for(int x : arr){
            sum += (x == 0 ? -1 : 1);
            if(mp.find(sum) != mp.end()) count += mp[sum];
            mp[sum]++;
        }
        return count;
    }
};
