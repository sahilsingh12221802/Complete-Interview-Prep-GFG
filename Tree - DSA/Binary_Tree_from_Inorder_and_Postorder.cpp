//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL)
        return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends

/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    unordered_map<int, int> idx;
    Node* build(int inStart, int inEnd, int& postIndex, vector<int> & inorder, vector<int>& postorder){
        if(inStart > inEnd) return NULL;
        int val = postorder[postIndex--];
        Node* root = new Node(val);
        int inIndex = idx[val];
        root->right = build(inIndex + 1, inEnd, postIndex, inorder, postorder);
        root->left = build(inStart, inIndex - 1, postIndex, inorder, postorder);
        return root;
    }
    // Function to return a tree created from postorder and inoreder traversals.
    Node* buildTree(vector<int> inorder, vector<int> postorder) {
        // code here
        int n = inorder.size();
        for(int i = 0; i < n; i++ ){
            idx[inorder[i]] = i;
        }
        int postIndex = n - 1;
        return build(0, n -1, postIndex, inorder, postorder);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> inorder;
        int number;
        while (ss >> number) {
            inorder.push_back(number);
        }

        getline(cin, input);
        stringstream ss2(input);
        vector<int> postorder;
        while (ss2 >> number) {
            postorder.push_back(number);
        }
        Solution obj;
        Node* root = obj.buildTree(inorder, postorder);
        preOrder(root);
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
