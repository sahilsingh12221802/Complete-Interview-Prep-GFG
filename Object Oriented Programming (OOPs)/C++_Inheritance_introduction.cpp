//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Cuboid 
{
    public:
    int length, width, height;
   //Add your code here.
   Cuboid(int l, int w, int h):length(l), width(w), height(h) {}
   void display(){
       cout << length << " "<<width<<" "<<height<<endl;
   }
};

class CuboidVol: public Cuboid
{
    public:
    //Add your code here.
    CuboidVol(int l = 0, int w = 0, int h = 0) : Cuboid(l, w, h) {}
    void read_input(int l, int w, int h){
        length = l;
        width = w;
        height = h;
    }
    
    void display(){
        int volume = length * width * height;
        cout << volume<<endl;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int l, w, h;
        cin>>l>>w>>h;
    
    // Declare a CuboidVol object
    
    CuboidVol c_vol;
    
    
    // Read length width and height
     
    c_vol.read_input(l,w,h);
    
    
    //  Print length, width and height
    
    c_vol.Cuboid::display();
    
    
    // Print the Volume
     
    c_vol.display();
    
cout << "~" << "\n";
}
    
    return 0;
}
// } Driver Code Ends
