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
 