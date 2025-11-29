class Solution {
  public:
    long maximum_sum(int N, vector<int> A, int K) {
        unordered_map<int,int> freq;
        for(int x : A) freq[x]++;
        
        priority_queue<pair<int,int>> pq;
        for(auto &p : freq) pq.push({p.second, p.first});
        
        long ans = 0;
        while(K--) {
            auto top = pq.top(); 
            pq.pop();
            ans += top.second;
            int f = top.first - 1;
            if(f > 0) pq.push({f, top.second});
        }
        return ans;
    }
};
