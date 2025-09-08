class Solution {
  public:
    void solve(string s,int i,string curr,vector<string>&res){
        if(i==s.size()){
            res.push_back(curr);
            return;
        }
        solve(s,i+1,curr,res);
        curr+=s[i];
        solve(s,i+1,curr,res);
    }
    vector<string> powerSet(string s) {
        vector<string> res;
        solve(s,0,"",res);
        return res;
    }
};
