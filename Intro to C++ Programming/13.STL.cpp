/*
C++  STL
-Container
-Algorithm


Containers
    -Sequence container
        *Array
        *Vector
        *Deque
        *list

    -Container adaptors
        *stack
        *queue
        *priority queue
*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at second index " << a.at(2) << endl;

    cout << "Empty or not " << a.empty() << endl;

    cout << "First element " << a.front() << endl;
    cout << "last element " << a.back() << endl;
}

//========================================================================

/*

        *Vector

A vector doubles its capacity when  a new element is added in it
For example if there are two integers in a vector but when we will add the third one its capacity will become four

Capacity of a vector is the space assigned for elements
Size of a vector is a number of elements present in a vector

*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // let us consider a vector with size 5 having assigned elements 1

    vector<int> a(5, 1);

    // if i want to copy vector a in vector v
    vector<int> last(a);

    cout << "print last " << endl;
    for (int i : last)
    {
        cout << i << " ";
    }

    cout << "Capacity " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity " << v.capacity() << endl;
    cout << "size " << v.size() << endl;

    cout << "Element at second index " << v.at(2) << endl;

    cout << "First element " << v.front() << endl;
    cout << "last element " << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;
}

//=====================================================================

/*

        *Deque
It is implemented by using different arrays

*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    //     for(int i:d){
    //         cout<<i<<" ";
    //     }

    // d.pop_front();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout << "print first index element " << d.at(1) << endl;

    cout << "front" << d.front() << endl;
    cout << "back" << d.back() << endl;

    cout << "empty or not " << d.empty() << endl;

    cout << "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase " << d.size() << endl;

    for (int i : d)
    {
        cout << i << endl;
    }
}

//================================================================

/*
        *list
We can access an element in a list only by traverse
We cannot directly access any element in a list

*/
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    list<int> n(5, 100);
    cout << "printing n " << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());

    cout << "after erase " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "size of list " << l.size() << endl;
}

//====================================================================

/*

    -Container adaptors
        *stack

*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("harsimran");
    s.push("kaur");
    s.push("singh");

    cout << "top element " << s.top() << endl;

    s.pop();
    cout << "top element " << s.top() << endl;

    cout << "size of stack " << s.size() << endl;

    cout << " empty or not " << s.empty() << endl;
}

//===============================================================

/*

        *queue

*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("harsimran");
    q.push("kaur");
    q.push("singh");

    cout << "size before pop " << q.size() << endl;

    cout << "first element " << q.front() << endl;

    q.pop();
    cout << "first element " << q.front() << endl;

    cout << "size after pop " << q.size() << endl;
}

//=================================================================

/*


*priority queue


*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "size " << maxi.size() << endl;

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout << "size " << mini.size() << endl;

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "empty or not " << mini.empty() << endl;
}

//=========================================================================

/*

    -Associative containers
        *sets

All the elements in a set are unique
If we will push any element again it will store it once
If elements can be stored in a set  it cannot be modified
Stored elements are return in sorted order
Set is a little bit slower than an unordered set


*/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl;
    }

    cout << endl;
    cout << "5 is present or not " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "value present at itr  " << *it << endl;
}

//========================================================================

/*

    *map

Map is a kind of data structure in which our data stored in the form of key value
All the keys will be unique
And one key will point the single value
Sorted


*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "kaur";
    m[13] = "harsimran";
    m[2] = "singh";

    m.insert({5, "horjodh"});

    cout << "before erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 13 " << m.count(13) << endl;

    m.erase(13);
    cout << "after erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}

//=======================================================================

/*

ALGORITHM


How the sort function is  working ?

It is based on introsort
Introsort is formed with the combination of three algorithms
Quick sort
Heap sort
And insertion sort


*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "finding 6 " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower bound " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upperr bound " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max " << max(a, b);

    cout << "min " << min(a, b);

    swap(a, b);
    cout << endl
         << "a is " << a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "string is " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
}
