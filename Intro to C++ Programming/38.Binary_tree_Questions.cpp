//Height of a binary tree
//=======================
/*

//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

 // } Driver Code Ends
//User function template for C++


// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
    
//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        //base case
        if(node == NULL) {
            return 0;
        }
        
        int left = height(node ->left);
        int right = height(node->right);
        
        int ans = max(left, right) + 1;
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string treeString;
		getline(cin,treeString);
		Node* root = buildTree(treeString);
        Solution ob;
		cout<<ob.height(root)<<endl;
    }
    return 0;
}  // } Driver Code Ends*/

//===============================================================================

//Diameter of a tree
//====================
/*
#include <bits/stdc++.h>
using namespace std;

// A binary tree node has data, pointer to left child
  // and a pointer to right child 
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
// Tree node structure  used in the program

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// }; 

class Solution {
  private:
    int height(struct Node* node){
        //base case
        if(node == NULL) {
            return 0;
        }
        
        int left = height(node ->left);
        int right = height(node->right);
        
        int ans = max(left, right) + 1;
        return ans;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    
    pair<int,int> diameterFast(Node* root) {
        //base case
        if(root == NULL) {
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int,int> ans;
        ans.first = max(op1, max(op2, op3));;
        ans.second = max(left.second , right.second) + 1;

        return ans;
    }
    int diameter(Node* root) {
    
        return diameterFast(root).first;
        
    }
};

// { Driver Code Starts.

// Driver program to test size function
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.diameter(root) << endl;
    }
    return 0;
}
  // } Driver Code Ends
*/
//================================================================================

//Check for balanced tree
//========================

//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool, int> isBalancedFast(Node* root) {
                // base case
        if(root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<int,int> left = isBalancedFast(root->left);
        pair<int,int> right = isBalancedFast(root->right);
        
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs (left.second - right.second ) <=1;
        
        pair<bool,int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff) {
           ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
    
};


// { Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.isBalanced(root) << endl;
    }
    return 0;
}
  // } Driver Code Ends
  //=============================================================================================