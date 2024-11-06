//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int posAverage(int numbers[], int size){
    
    int positivecount = 0;
    for(int i = 0; i < size; i++){
        if(numbers[i] >= 0){
            positivecount++;
        }
    }
    //Write your code to find average of positive numbers in numbers array
    //return the answer
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(numbers[i] > 0){
            sum += numbers[i];
        }
    }
    return positivecount == 0 ? 0 : sum / positivecount;
    
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int numbers[n];
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }
        int avg = posAverage(numbers, n);
        cout << avg << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends
