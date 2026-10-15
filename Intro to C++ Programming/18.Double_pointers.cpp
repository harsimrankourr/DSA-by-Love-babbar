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

