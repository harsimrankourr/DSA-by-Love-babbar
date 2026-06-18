/*
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
};

int main()
{

    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}

*/

///=======================================================================

/*

Types of linked list
    - Singly linked list
    - Doubly linked list
    - Circular Linked list
    - - Circular doubly linked list
*/

// singular linked list
//  Insertion of ingular linked list

/*
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
};

void insertAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{

    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // innserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

int main()
{

    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;

    print(head);

    // insertAtHead(head, 12);
    insertAtTail(tail, 12);

    print(head);

    // insertAtHead(head, 15);
    insertAtTail(tail, 15);

    print(head);

    insertAtPosition(head, tail, 3, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail" << tail->data << endl;

    cout << "head" << head->data << endl;

    return 0;
}

*/
//==========================================================================

// Deletion of ingular linked list

/*
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

    /// destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{

    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // innserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

void deletion(int position, Node *&head)
{

    // deleting first or start  node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{

    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;

    print(head);

    // insertAtHead(head, 12);
    insertAtTail(tail, 12);

    print(head);

    // insertAtHead(head, 15);
    insertAtTail(tail, 15);

    print(head);

    insertAtPosition(head, tail, 3, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail" << tail->data << endl;

    cout << "head" << head->data << endl;

    deletion(1, head);
    print(head);

    return 0;
}

*/
//==========================================================================

// Doubly linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// traversing a linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of linked list
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // innserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main()
{

    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(tail, head, 11);
    print(head);

    cout << "head " << head->data
         << endl;

    cout << "tail " << tail->data
         << endl;

    insertAtHead(tail, head, 13);
    print(head);

    cout << "head " << head->data
         << endl;

    cout << "tail " << tail->data
         << endl;

    insertAtHead(tail, head, 8);
    print(head);

    cout << "head " << head->data
         << endl;

    cout << "tail " << tail->data
         << endl;

    insertAtTail(tail, head, 25);
    print(head);

    cout << "head " << head->data
         << endl;

    cout << "tail " << tail->data
         << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);

    return 0;
}