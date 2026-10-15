#include<iostream>
using namespace std;


int main(){


    int i = 5;
    int *p = &i;
    int **p2 = &p;


    //these three will print the content of i
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;


    //these three will print the content of p
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;


    //these 2 will print the content of double pointer
    cout << &p << endl;
    cout << p2 << endl;
 


    return 0;
}
//---------------------------------------------------------------
// Functions and pointer

#include<iostream>
using namespace std;


void update(int **p2){
   
    p2 = p2+1;
    //nothing will change


    *p2 = *p2+1;
    //changes will occur


    **p2 = **p2+1;
    //changes will occur
}


int main(){


    int i = 5;
    int *p = &i;
    int **p2 = &p;


    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;


    return 0;
}
 
//================================================================