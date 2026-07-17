#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //creation of a map
    unordered_map<string, int> m;

    //Insertion

    pair <string, int> p = make_pair("simran" , 3);
    m.insert(p);
}