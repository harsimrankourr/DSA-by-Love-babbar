#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;


    int i = 1;


    while (i <= n) {
        i= i + 1;
    }
}

//==========================================

#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;


    int i = 1;
    int sum = 0;


    while (i <= n) {
        sum = sum + i;
        i= i + 1;
    }


    cout << "value of sum is  " << sum << endl;
}

//==========================================

//Sum of n even numbers:

#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;


    int i = 2;
    int sum = 0;


    while (i <= n) {
        sum = sum + i;
        i= i + 2;
    }


    cout << "value of sum is  " << sum << endl;
}

//===========================================

//Number is prime or not 

#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;


    int i = 2;
    while (i < n) {
        if (n%i ==0){
            cout << "not prime for " << i << endl;
        }
        else{
            cout << "prime for " << i << endl;
        }
        i = i + 1;
   
    }
}

//=========================================

