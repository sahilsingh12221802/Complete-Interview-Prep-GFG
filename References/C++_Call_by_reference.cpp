//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    auto reverse = [](int num) {
        int rev = 0;
        while (num > 0) {
            rev = rev * 10 + (num % 10);
            num /= 10;
        }
        return rev;
    };
    a = reverse(a);
    b = reverse(b);
    
}
void swap(int &a,int &b)
{
    //Add your code here.
    int temp = a;
    a = b;
    b = temp;
}



//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
