int countVowels(string str) {
    bool v[5] = {false, false, false, false, false};
    for(char c : str) {
        if(c == 'a') v[0] = true;
        else if(c == 'e') v[1] = true;
        else if(c == 'i') v[2] = true;
        else if(c == 'o') v[3] = true;
        else if(c == 'u') v[4] = true;
    }
    int count = 0;
    for(bool b : v) {
        if(b) count++;
    }
    return count;
}
