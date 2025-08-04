class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 != n2){
            return false;
        }
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i = 0; i < n1; i++){
            if(s1[i] != s2[i]){
                return false;
            }
        }
        return true;
    }
};
