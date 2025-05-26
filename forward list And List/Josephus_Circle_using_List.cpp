// User function Template for C++

int josephus(int n, int k) {
    // code here
    list<int> people;
    for(int i = 1; i <= n; ++i) people.push_back(i);
    auto it = people.begin();
    while(people.size() > 1) {
        for(int i = 1; i < k; ++i) {
            ++it;
            if(it == people.end()) it = people.begin();
        }
        it = people.erase(it);
        if(it == people.end()) it = people.begin();
    }
    return people.front();
}
