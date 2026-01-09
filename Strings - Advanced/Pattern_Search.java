class Solution {
  public:
    bool search(string pat, string txt) {
        int m = pat.size(), n = txt.size();
        if(m > n) return false;
        vector<int> lps(m,0);
        for(int i=1,len=0;i<m;){
            if(pat[i]==pat[len]) lps[i++]=++len;
            else if(len) len=lps[len-1];
            else lps[i++]=0;
        }
        for(int i=0,j=0;i<n;){
            if(txt[i]==pat[j]) i++,j++;
            if(j==m) return true;
            else if(i<n && txt[i]!=pat[j]){
                if(j) j=lps[j-1];
                else i++;
            }
        }
        return false;
    }
};
