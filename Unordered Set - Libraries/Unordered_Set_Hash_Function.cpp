long int HashMe(unordered_set<string> myset, string str) {
    hash<string> hasher;
    return hasher(str);
}
