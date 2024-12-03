//{ Driver Code Starts
// Initial Template for C

// } Driver Code Ends
//User function Template for C++
struct NODE{
    union{
        struct{
            struct node* left;
            struct node* right;
        };
        double data;
    };
};

/*create binary tree struct node*/
// your code here


//{ Driver Code Starts.
#include <stdio.h>

int main() {
    // code

    struct NODE ll;
    printf("%d\n", 1);
    printf("~");
    return 0;
}
// } Driver Code Ends
