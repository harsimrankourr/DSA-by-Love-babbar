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


    //print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//---------------------------------------------------------------------

//Column wise output 

#include <iostream>
using namespace std;


int main(){
     
    //create 2D array
    int arr[3][4];


    //print
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//-----------------------------------------------------------------