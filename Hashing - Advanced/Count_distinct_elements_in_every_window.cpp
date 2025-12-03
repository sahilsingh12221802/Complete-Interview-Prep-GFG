class Solution {
public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int,int> freq;
        vector<int> res;
        for(int i=0;i<k;i++) freq[arr[i]]++;
        res.push_back(freq.size());
        for(int i=k;i<arr.size();i++){
            freq[arr[i-k]]--;
            if(freq[arr[i-k]]==0) freq.erase(arr[i-k]);
            freq[arr[i]]++;
            res.push_back(freq.size());
        }
        return res;
    }
};
