/*

# Reverse the linked list

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

*/