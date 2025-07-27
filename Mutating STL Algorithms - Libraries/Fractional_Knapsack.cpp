class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<pair<double, int>> ratio(n);
        for (int i = 0; i < n; ++i)
            ratio[i] = { (double)val[i] / wt[i], i };
        sort(ratio.rbegin(), ratio.rend());
        
        double totalValue = 0.0;
        for (int i = 0; i < n && capacity > 0; ++i) {
            int idx = ratio[i].second;
            int weight = min(capacity, wt[idx]);
            totalValue += (double)weight * val[idx] / wt[idx];
            capacity -= weight;
        }
        return round(totalValue * 1e6) / 1e6;
    }
};
