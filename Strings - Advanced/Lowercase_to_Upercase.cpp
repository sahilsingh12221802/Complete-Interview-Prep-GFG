class Solution {
  public:
    string caseConversion(string str) {

        // Your code here
        for(int i=0;i<str.length();i++){
            str[i] = toupper(str[i]);
        }
        return str;
    }
};
