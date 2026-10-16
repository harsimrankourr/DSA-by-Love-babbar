// Creation of a 2D array

#include <iostream>
using namespace std;


int main(){
     
    //create 2D array
    int arr[3][4];


    //taking input (int)3
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    return 0;
}

//---------------------------------------------------------------