#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    // creation of a map
    map<string, int> m;

    // Insertion

    // 1
    pair<string, int> p = make_pair("simran", 3);
    m.insert(p);

    // 2
    pair<string, int> pair2("Harsimran", 2);
    m.insert(pair2);

    // 3
    m["mera"] = 1;

    // Updation will occur
    m["mera"] = 2;

    // Search
    cout << m["mera"] << endl;
    cout << m.at("simran") << endl;

    cout << m.at("unknownKey") << endl;

    // created an entry 0 for this unknown key
    cout << m["unknownKey"] << endl;

    // size
    cout << m.size() << endl;

    // to check presence
    cout << m.count("bro") << endl;

    // erase
    m.erase("simran");
    cout << m.size() << endl;

    // access any element

    // using iterators
    map<string, int>::iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // or
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
