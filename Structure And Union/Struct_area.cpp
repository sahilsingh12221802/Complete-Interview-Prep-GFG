//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct area {
    int sd;
    int len, wid;
};


// } Driver Code Ends
// User function Template for C++

/*struct area
{
    int sd;
    int len, wid;
}*/
void find_area(int side, int le, int wd) {
    // assign value to side of square
    // your code here
    area a;
    a.sd = side;
    // assign values to length and breadth of rectangle
    // your code here
    a.len = le;
    a.wid = wd;
    // computing area of square
    // your code here
    int Area_Square = a.sd * a.sd;
    int Rectangle_Area = a.len * a.wid;
    // computing area of rectangle
    // your code here
    cout << Area_Square << " " << Rectangle_Area;
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int side, length, wide;
        cin >> side >> length >> wide;

        find_area(side, length, wide);
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
