class Solution {
  public:
    int binarySubstring(string& s) {
        long long cnt = 0;
        for(char c : s) if(c == '1') cnt++;
        return cnt * (cnt - 1) / 2;
    }
};
