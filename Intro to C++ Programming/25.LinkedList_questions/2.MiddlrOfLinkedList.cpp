/*

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
*/