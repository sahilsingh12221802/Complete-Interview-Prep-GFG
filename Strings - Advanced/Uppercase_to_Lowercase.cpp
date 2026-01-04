// User function Template for C++

class Solution {
  public:
    string caseConversion(string str) {
        // Your code here
        for(int i=0;i<str.length();i++){
            str[i]=tolower(str[i]);
        }
        return str;
    }
};
