//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}



void displayList(Node *head)
{
    //Head to Tail
    while(head->next)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data;
    cout<<endl;
    
    //Tail to Head
    while(head->prev)
    {
        cout<<head->data<<" ";
        head=head->prev;
    }
    cout<<head->data;
    
   
    
    
}



// } Driver Code Ends

//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node *deleteHead(Node * head)
{
   //Your code here
   if(!head || !head->next) return NULL;
   Node *newHead = head->next;
   newHead->prev = NULL;
   head->next = NULL;
   delete head;
   return newHead;
}



//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail=NULL;
        int x;
	    cin>>x;
	    head = newNode(x);
	    tail = head;
	    
	    for(int i=0;i<n - 1;i++)
	    {
	        cin>>x;
	        Node* temp=newNode(x);
	        tail->next=temp;
	        temp->prev= tail;
	        tail = temp;
	    }
	    head=deleteHead(head);
	    
	    if(head->prev==NULL)
            displayList(head);
        else
            cout<<"Please set the previous of head to null";
 
	    cout<<endl;
	
cout << "~" << "\n";
}
	return 0;
}


// } Driver Code Ends
