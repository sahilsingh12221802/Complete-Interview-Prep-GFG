//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

class student
{
    protected :
        int roll_number;
        
    public:
        void set_number(int a)
        {
            roll_number = a;
        }
        
        void display_number()
        {
            cout<<roll_number<<endl;
        }
};


// } Driver Code Ends
//User function Template for C++
class test: public student 
{
    // Add set_marks() method here.
    protected:
    float marks[5];
    public:
    void set_marks(float temp[]){
        for(int i = 0; i < 5; i++){
            marks[i] = temp[i];
        }
    }
    
};

class result: public test
{
    // Add display() method here.
    public:
    void display(){
        float total = 0;
        for(int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        
        float average = total / 5;
        cout << roll_number << " " << total << " " << average << endl;
    }
};


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
    	result student1;
	    int n;
	    cin>>n;
	    student1.set_number(n);
	    float temp[5];
	    int i;
	
	    for(i = 0; i < 5; i++)
	        cin>>temp[i];
	
	    student1.set_marks(temp);
	    student1.display();
	
cout << "~" << "\n";
}

	return 0;    
}

// } Driver Code Ends
