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
class Solution{
    public:
    bool isCircular(Node * head)
    {
       //Your code here
       if(!head) return false;
       Node *temp = head;
       while(temp->next && temp->next != head){
           temp = temp->next;
       }
       return temp->next == head;
    }
};



//{ Driver Code Starts.


void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    
    temp->next=head;
    head->prev=temp;
}




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
	    
	    
	    int y;
	    cin>>y;
	    
	    if(y==1)
	    {
	        makeCircular(head);
	    }
	    Solution ob;
	    cout<<ob.isCircular(head);
 
	    cout<<endl;
	
cout << "~" << "\n";
}
	return 0;
}


// } Driver Code Ends
