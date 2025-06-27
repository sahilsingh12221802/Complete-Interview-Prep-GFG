string Sorted_Characters(string s) {
    vector<int> freq(26, 0);
    for(char c : s) freq[c - 'a'] = 1;
    string res = "";
    for(int i = 0; i < 26; i++) {
        if(freq[i]) res += char(i + 'a');
    }
    return res;
}
