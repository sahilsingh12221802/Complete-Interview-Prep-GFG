#include <queue>
#include <vector>
using namespace std;

void mergeArrays(int* a, int n, int* b, int m) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < n; ++i) minHeap.push(a[i]);
    for (int i = 0; i < m; ++i) minHeap.push(b[i]);
    int idx = 0;
    while (!minHeap.empty()) {
        if (idx < n) a[idx++] = minHeap.top();
        else b[idx++ - n] = minHeap.top();
        minHeap.pop();
    }
}
