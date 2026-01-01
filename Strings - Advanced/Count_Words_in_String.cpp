//User function Template for C++

class Solution{
  public:
    int countWords(string str){
        
        //Your code here
        int count = 0;
        bool isword = false;
        
        for(char ch : str){
            if(ch == ' '){
                isword = false;
            }else{
                if(!isword){
                    count++;
                    isword = true;
                }
            }
        }
        return count;
    }
};
