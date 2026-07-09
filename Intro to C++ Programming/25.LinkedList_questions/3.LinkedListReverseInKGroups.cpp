/*

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
}*/