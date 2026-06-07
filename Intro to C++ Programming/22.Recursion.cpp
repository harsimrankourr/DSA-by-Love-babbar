//FACTORIAL OF A NUMBER

#include<iostream>
using namespace std;


int factorial (int n){


    //base case
    if( n == 0)
    return 1;


    int smallerProblem = factorial (n-1);
    int biggerProblen = n*smallerProblem;


    return biggerProblem;


}


int main(){


    int n;
    cin >> n;


    int ans = factorial (n);


    cout << ans << endl;


    return 0;
}


//===============================================================

