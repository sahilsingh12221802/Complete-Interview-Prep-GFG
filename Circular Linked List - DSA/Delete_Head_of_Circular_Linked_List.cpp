//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}



void displayList(Node *head)
{
    Node *temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
}



int getLength(Node * head)
{
    Node *temp=head;
    
    int count=0;
    while(temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    return count+1;
}



// } Driver Code Ends
//User function Template for C++

/*

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

*/
Node * deleteHead(Node *head)
{
   //Your code here
   if(head == NULL || head->next == head){
       return NULL;
   }
   Node* temp = head;
   while(temp->next != head) temp = temp->next;
   Node* newHead = head->next;
   temp->next = newHead;
   head->next = NULL;
   delete head;
   return newHead;
}

//{ Driver Code Starts.


void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail = NULL;
	    int x;
	    cin >> x;
	    head = new Node(x);
	    tail = head;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>x;
	        tail -> next = new Node(x);
	        tail = tail -> next;
	    }
	    
  

	    makeCircular(head);
	    
	    Node * oldHead=head;
	    head=deleteHead(head);
	    
	    if(oldHead->next==NULL)
	    {
	    
    	    displayList(head);
	    }
	    else
	    {
	        cout<<"Please set the next of original head to null";
	    }

	    
	 
	    
	    cout<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
