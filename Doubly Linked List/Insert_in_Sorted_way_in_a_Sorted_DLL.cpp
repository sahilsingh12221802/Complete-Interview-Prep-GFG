//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* getNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void freeList(struct Node* head) {
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

bool validate(struct Node* head) {
    struct Node* last = NULL;
    while (head != NULL) {
        if (head->prev != last)
            return false;
        last = head;
        head = head->next;
    }
    return true;
}


// } Driver Code Ends

/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        Node* newNode = getNode(x);
        if(x <= head->data){
            newNode->next = head;
            head->prev = newNode;
            return newNode;
        }
        Node* curr = head;
        while(curr->next && curr->next->data < x) curr = curr->next;
        newNode->next = curr->next;
        if(curr->next) curr->next->prev = newNode;
        curr->next = newNode;
        newNode->prev = curr;
        return head;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = getNode(x);
            tail = head;
        }

        while (ss >> x) {
            tail->next = getNode(x);
            tail->next->prev = tail;
            tail = tail->next;
        }

        int valueToInsert;
        cin >> valueToInsert;
        cin.ignore(); // Ignore the newline character after the value

        Solution obj;
        head = obj.sortedInsert(head, valueToInsert);
        if (!validate(head))
            cout << "Invalid DLL\n";
        else
            printList(head);
        freeList(head);
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends
