class Solution {
  public:
    bool searchPattern(string& txt, string& pat) {
        return txt.find(pat) != string::npos;
    }
};
