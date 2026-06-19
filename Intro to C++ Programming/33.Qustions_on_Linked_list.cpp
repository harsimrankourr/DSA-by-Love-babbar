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


*/