class Solution {
public:
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int x: arr) freq[x]++;
        
        sort(arr.begin(), arr.end(), [&](int a, int b){
            if(freq[a] == freq[b]) return a < b;
            return freq[a] > freq[b];
        });
        
        return arr;
    }
};
