#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    // creation of a map
    unordered_map<string, int> m;

    // Insertion

    // 1
    pair<string, int> p = make_pair("simran", 3);
    m.insert(p);

    // 2
    pair<string, int> pair2("Harsimran", 2);
    m.insert(pair2);

    // 3
    m["mera"] = 1;

    //Updation will occur 
    m["mera"] = 2;

    // Search
    cout << m["mera"] << endl;
    cout << m.at("simran") << endl;

    cout << m.at("unknownKey") << endl;

    //created an entry 0 for this unknown key
    cout << m["unknownKey"] << endl;

    //size 
    cout << m.size() << endl;

    // to check presence 
    cout << m.count ("bro") << endl; 

    return 0;
}
