/*You are required to complete below methods*/

/*prints space separated
elements of list A*/
void print(list<int> &A) {
    // Your code here
    if(A.empty()) {
        cout << -1 <<endl;
        return;
    }
    for (int x : A){
        cout << x << " ";
        
    }
    cout << endl;
}

/*remove element from
back of list A*/
void remove_from_back(list<int> &A) {
    
    // Your code here
    if(!A.empty())
        A.pop_back();
    print(A);
}

/*remove element from
front of list A*/
    
void remove_from_front(list<int> &A) {
    // Your code here
    if(!A.empty())
        A.pop_front();
    print(A);
}

/*inserts an element x at
    
the back of the list A */
void add_to_list(list<int> &A, int x) {
    // Your code here
    A.push_back(x);
    print(A);
}
    

/*sort the list A in ascending order*/
void sort_list(list<int> &A) {
    // Your code here
    A.sort();
    print(A);
}

/*reverses the list A*/
void reverse_list(list<int> &A) {
    
    // Your code here
    A.reverse();
    print(A);
}

/*returns the size of the list  A */
int size_of_list(list<int> &A) {
    
    // Your code here
    return A.size();
}

/*inserts an element x at
the front of the list A*/
void add_from_front(list<int> &A, int x) {
    // Your code here
    A.push_front(x);
    print(A);
}
