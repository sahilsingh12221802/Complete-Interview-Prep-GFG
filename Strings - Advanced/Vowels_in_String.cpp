class Solution {
  public:
    int countVowels(string str) {
        int count = 0;
        for (char c : str) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            }
        }
        return count;
    }
};
