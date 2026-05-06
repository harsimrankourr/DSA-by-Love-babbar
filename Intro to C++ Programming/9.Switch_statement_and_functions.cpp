#include<iostream>
using namespace std;


int main (){


    char ch = 'a';


    cout << endl;
    switch ( ch ){


        case 1 : cout << "first" << endl;
        break;


        case '1': cout << "character one " << endl;
        break;


        default: cout << " it is a default case" << endl;
    }


    cout << endl;


    return 0;
}

//==========================================================

//Mini calculator program

#include<iostream>
using namespace std;


int main (){


    int a,b;


    cout << "Enter the value of a " << endl;
    cin >> a;


    cout << "Enter the value of b " << endl;
    cin >> b;


    char op;
    cout <<"Enter operation you want to perform" << endl;
    cin >> op;


    switch (op){
        case '+': cout << (a+b) <<endl;
                break;


        case '-': cout << (a-b) <<endl;
                break;


        case '*': cout << (a*b) << endl;
                break;


        case '/': cout << (a/b) << endl;
                break;


        case '%': cout << (a%b) << endl;
                break;


        default: cout << "please enter a valid operation" << endl;
   




    }
}

//============================================================

//Power to a number

#include<iostream>
using namespace std;


int main (){


    int a,b;


    cin >> a >> b;


    int i;


    int ans = 1;


    for (i=1; i<=b; i++){
        ans = ans*a;
    }


    cout << "answer is " << ans << endl;


    return 0;
}

//====================================================================

/*
Functions 
Power of an integer
*/

#include<iostream>
using namespace std;


int power (int a, int b){


    int ans = 1;


    for (int i=1; i<=b; i++){
        ans = ans*a;
    }


    return ans;
}


int main (){


    int a,b;


    cin >> a >> b;


    int ans =  power (a,b);
    cout << "answer is " << ans << endl;
 
    return 0;
}

//===============================================================

//OR

#include<iostream>
using namespace std;


int power (){


    int a, b;
    cin>> a >> b;


    int ans = 1;


    for (int i=1; i<=b; i++){
        ans = ans*a;
    }


    return ans;
}


int main (){


   // cout << "answer is " << ans << endl;
 
    return 0;
}

//======================================================

//Has to run this code 

#include<iostream>
using namespace std;


bool isEven (int a){


    if (a&1){
        return 0;
    }


    return 1;
}
int main (){


    int num;
    cin >> num;


if (isEven(num)){
    cout <<"number is even" << endl;


}
else {
        cout <<"number is odd" <<endl;
    }
}

//===============================================================

#include<iostream>
using namespace std;


int factorial (int n){


    int fact = 1;


    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}


int nCr(int n, int r){


    int num = factorial(n);


    int denom = factorial(r) * factorial (n-r);


    int ans = num/denom;


    return ans;
}
int main (){


int n, r;
cin >> n >> r;


cout << "answer is " << nCr(n,r) << endl;
}

//==================================================================

#include<iostream>
using namespace std;


void printCounting(int n){


    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
}


int main(){


    int n;
    cin >> n;


    // function call
    printCounting(n);


    return 0;
}


//=======================================================================

//Prime or not 

/*
#include<iostream>
using namespace std;


bool isPrime (int n){


    for (int i = 2; i<n; i++){


        if (n%i = 0){
            return 0;
        }
    }


    return 1;
}


int main(){


    int n;
    cin >> n;


    if (isPrime(n)){
        cout << "is a prime number" << endl;
       
    }
    cout << "is not a prime number " << endl;
}
    */

//==================================================================

#include<iostream>
using namespace std;


void dummy (int n){
    n++;
    cout << "n is " << n << endl;
}


int main(){


    int n;
    cin >> n;


    dummy(n);


    cout << "number n is " << n << endl;


    return 0;
}
