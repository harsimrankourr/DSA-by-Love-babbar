/*

# Reverse the linked list
//========================

Logic

Node* prev = NULL;
Node* curr = head;
Node* forward = NULL;

while(curr != NULL){
forward = curr -> next;
curr -> next = prev;
prev = curr;
curr = forward;
}
return prev;

//in case of empty or single node

if(head == NULL || head -> next == NULL){
return head;
}

//===========================================================================

//Recursive solution

void reverse(Node* &head, Node* curr, Node* prev){

//base case
if(curr == NULL){
head = prev;
return;
}

Node* forward = curr -> next;
reverse(head, forward, curr);
curr -> next = prev
}

Npde* reverseLinkedList (Node* head){

Node* curr = head;
Node* prev = NULL;
reverse(head, curr, prev);
return head;
}

//=====================================================================

//ot it can be

Node* reverse1(Node* head){

//base case
if(head == NULL || head -> next == NULL){
return head;
}

Node*chotaHead = reverse1(head -> next);

head -> next -> next = head;
head -> next = NULL;

return chotaHead;
}
//===============================================================================

//Middle of linked list
//=====================

int getLength(Node* head){

int len = 0;
while(head != NULL){
len++;
head = head -> next;
}
return len;
}

Node*findMiddle(Node* head){

int len = getLength(head);
//for position
int ans = (len/2) +1;

//for value of node
int ans = (len/2);

Node* temp = head;

int cnt = 0;
while(cnt < ans){
temp = temp -> next;
cnt++;
}

return temp;
}

//there is an optimised soln is lse

//================================================================================

//Linked list reverse in K groups
//=================================

Node* kReverse (Node* head, int k){

//base case
if(head == NULL){
    return NULL;
}

//step 1 - reverse 1st k nodes
Node* next = NULL;
Node* curr = head;
Node* prev = NULL;
int coint = 0;

while (curr != NULL && count < k){
    next = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = next;
    count++ ;
}

//step2 - Baki recursion naal ho jana

if (next != NULL){
    head -> next = kReverse(next, k);
}

//step3 - return head of the reversed linked list

return prev;
}

//===============================================================================
*/

// Circularly linked list(true or false)
//=====================================

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node withd data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // assuming that the element is present in the list

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        // assuming that the element  is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{

    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is  empty" << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
}

void deleteNode(Node *&tail, int value)
{

    // empty list
    if (tail == NULL)
    {
        cout << "List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty

        // assuming the "value" is present in the Linked list
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // Linked list having 1 node only
        if (curr == prev)
        {
            tail = NULL;
        }

        // Linked list having 2 or more than 2 nodes
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node *head)
{

    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }

    return false;
}

int main()
{

    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    cout << endl;

    insertNode(tail, 3, 5);
    print(tail);
    cout << endl;

    insertNode(tail, 5, 7);
    print(tail);
    cout << endl;

    insertNode(tail, 5, 6);
    print(tail);
    cout << endl;

    insertNode(tail, 3, 4);
    print(tail);
    cout << endl;

    /*
    deleteNode(tail, 3);
    print(tail);
    cout << endl;
*/

    if (isCircularList(tail))
    {
        cout << "Linked list is circular in nature" << endl;
    }
    else
    {
        cout << "Linked list is not circular" << endl;
    }

    return 0;
}

//=========================================================================================================

/*
// IMPORTANT QUESTIONS
    - Detect cycle in linkedd list
    - Remove cycle from linked list
    - Beginning/ start node of loop in linked list
*/

// Detect a Loop in linked list
//============================

#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // Empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Non-empty list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

bool detectLoop(Node *head)
{
    if (head == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Loop detected at node: " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 5, 6);
    insertNode(tail, 3, 4);

    cout << "Circular Linked List: ";
    print(tail);

    // Head of circular linked list
    Node *head = tail->next;

    if (detectLoop(head))
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "No cycle present" << endl;
    }

    return 0;
}

//=========================================================================================================

// FLOYD'S CYCLE DETECTION ALGORITHM

//when slow is in the starting of loop and fast is already in the loop, so if after every one iteration of the slow and fast distance between them decrease it means loop/cycle is present in the loop

#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // Empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Non-empty list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

bool detectLoop(Node *head)
{
    if (head == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Loop detected at node: " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node *floydDetectLoop(Node *head)
{

    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            cout << "Present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 5, 6);
    insertNode(tail, 3, 4);

    cout << "Circular Linked List: ";
    print(tail);

    // Head of circular linked list
    Node *head = tail->next;

    if (detectLoop(head))
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "No cycle present" << endl;
    }

    if (floydDetectLoop(head) != NULL)
    {
        cout << "Cycle is pressent " << endl;
    }
    else
    {
        cout << "No cycle" << endl;
    }

    return 0;
}

//=====================================================================================

//Get starting Node of the loop


#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // Empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Non-empty list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

bool detectLoop(Node *head)
{
    if (head == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Loop detected at node: " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node *floydDetectLoop(Node *head)
{

    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            cout << "Present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;
}

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 5, 6);
    insertNode(tail, 3, 4);

    cout << "Circular Linked List: ";
    print(tail);

    // Head of circular linked list
    Node *head = tail->next;


    //Detection of loop in linked list
    if (detectLoop(head))
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "No cycle present" << endl;
    }

    if (floydDetectLoop(head) != NULL)
    {
        cout << "Cycle is pressent " << endl;
    }
    else
    {
        cout << "No cycle" << endl;
    }

    //get starting of loop in the linked list

    Node* loop =  getStartingNode(head);
    cout << "Loop starts at " << loop -> data << endl;


    return 0;
}

//=====================================================================================================