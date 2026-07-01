

// Determine if two trees are identical
//====================================

/*
#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;

  Node(int x){
      data = x;
      left = NULL;
      right = NULL;
  }
};


//  // } Driver Code Ends
//  A binary tree node


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




class Solution
{
  public:
  //Function to check if two trees are identical.
  bool isIdentical(Node *r1, Node *r2)
  {
      // base case
      if(r1 == NULL && r2 == NULL) {
          return true;
      }

      if(r1 == NULL && r2 != NULL) {
          return false;
      }

      if(r1 != NULL && r2 == NULL) {
          return false;
      }

      bool left = isIdentical(r1->left, r2->left);
      bool right = isIdentical(r1->right, r2->right);

      bool value = r1->data == r2->data;


      if(left && right && value) {
          return true;
      }
      else
      {
          return false;
      }

  }

};

// { Driver Code Starts.

// Function to Build Tree
Node *buildTree(string str) {
  // Corner Case
  if (str.length() == 0 || str[0] == 'N')
      return NULL;

  // Creating vector of strings from input
  // string after spliting by space
  vector<string> ip;

  istringstream iss(str);
  for (string str; iss >> str;)
      ip.push_back(str);

  // Create the root of the tree
  Node *root = new Node(stoi(ip[0]));

  // Push the root to the queue
  queue<Node *> queue;
  queue.push(root);

  // Starting from the second element
  int i = 1;
  while (!queue.empty() && i < ip.size()) {

      // Get and remove the front of the queue
      Node *currNode = queue.front();
      queue.pop();

      // Get the current node's value from the string
      string currVal = ip[i];

      // If the left child is not null
      if (currVal != "N") {

          // Create the left child for the current node
          currNode->left = new Node(stoi(currVal));

          // Push it to the queue
          queue.push(currNode->left);
      }

      // For the right child
      i++;
      if (i >= ip.size())
          break;
      currVal = ip[i];

      // If the right child is not null
      if (currVal != "N") {

          // Create the right child for the current node
          currNode->right = new Node(stoi(currVal));

          // Push it to the queue
          queue.push(currNode->right);
      }
      i++;
  }

  return root;
}

int main() {
  int tc;
  scanf("%d ", &tc);
  while (tc--) {
      string str, str1;
      getline(cin, str);
      Node *rootA = buildTree(str);
      getline(cin, str1);
      Node *rootB = buildTree(str1);
      Solution ob;
      if (ob.isIdentical(rootA, rootB)) {
          cout << "Yes\n";
      } else {
          cout << "No\n";
      }
  }
  return 0;
}  // } Driver Code Ends
*/
//====================================================================================

// Sum tree
//========

/*
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
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
    Node* root = newNode(stoi(ip[0]));

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

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

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
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//  Tree node
// struct Node
// {
//     int data;
//     Node* left, * right;
// };

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    pair<bool,int> isSumTreeFast(Node* root) {

        //base case
        if(root == NULL) {
            pair<bool,int> p = make_pair(true, 0);
            return p;
        }

        if(root->left == NULL && root->right == NULL ) {
            pair<bool,int> p = make_pair(true, root->data);
            return p;
        }

        pair<bool,int> leftAns = isSumTreeFast(root->left);
        pair<bool,int> rightAns = isSumTreeFast(root->right);

        bool isLeftSumTree = leftAns.first;
        bool isRightSumTree = rightAns.first;

        int leftSum = leftAns.second;
        int rightSum = rightAns.second;

        bool condn = root->data == leftSum + rightSum;

        pair<bool, int> ans;

        if(isLeftSumTree && isRightSumTree && condn) {
            ans.first = true;
            ans.second = root->data + leftSum + rightSum ;
        }
        else
        {
            ans.first = false;
        }
        return ans;

    }
    bool isSumTree(Node* root)
    {
        return isSumTreeFast(root).first;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    scanf("%d ",&t);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        Solution ob;
        cout <<ob.isSumTree(root) << endl;
    }
    return 1;
}  // } Driver Code Ends
  */
//=====================================================================================

// Zig Zag traversal
//=================

/*
// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

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
//User function Template for C++
// Structure of the node of the binary tree is as
// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };


class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int> result;
        if(root == NULL)
            return result;

        queue<Node*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()) {

            int size = q.size();
            vector<int> ans(size);

            //Level Process
            for(int i=0; i<size; i++) {

                Node* frontNode = q.front();
                q.pop();

                //normal insert or reverse insert
                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontNode -> data;

                if(frontNode->left)
                    q.push(frontNode -> left);

                if(frontNode->right)
                    q.push(frontNode -> right);
            }

            //direction change karni h
            leftToRight = !leftToRight;

          for(auto i: ans) {
              result.push_back(i);
          }
        }
            return result;
    }
};

// { Driver Code Starts.

// Driver program to test size function



int main() {


    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);

        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        ans = ob.zigZagTraversal(root) ;

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << endl;

    }
    return 0;
}
  // } Driver Code Ends
*/
//==========================================================================================

// Boundary traversal
//==================

/*
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


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
    Node* root = newNode(stoi(ip[0]));

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

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

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
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}
 // } Driver Code Ends
//  A binary tree Node
// struct Node
// {
//     int data;
//     Node* left, * right;
// };

class Solution {
public:
    void traverseLeft(Node* root, vector<int> &ans) {
        //base case
        if( (root == NULL) || (root->left == NULL && root->right == NULL) )
            return ;

        ans.push_back(root->data);
        if(root->left)
            traverseLeft(root->left, ans);
        else
            traverseLeft(root->right, ans);

    }

    void traverseLeaf(Node* root, vector<int> &ans) {
        //base case
        if(root == NULL)
            return ;

        if(root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return;
        }

        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);

    }

    void traverseRight(Node* root, vector<int> &ans) {
        //base case
        if( (root == NULL) || (root->left == NULL && root->right == NULL) )
            return ;

        if(root->right)
            traverseRight(root->right, ans);
        else
            traverseRight(root->left, ans);

        //wapas aagye
        ans.push_back(root->data);

    }

    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL)
            return ans;

        ans.push_back(root->data);

        //left part print/store
        traverseLeft(root->left, ans);

        //traverse Leaf Nodes

        //left subtree
        traverseLeaf(root->left, ans);
        //right subtree
        traverseLeaf(root->right, ans);

        //traverse right part
        traverseRight(root->right, ans);

        return ans;


    }
};

// { Driver Code Starts.

//Driver program to test size function

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.boundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
  */
//===========================================================================================

// Vertical traversal of binary tree
//=================================

/*
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

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
    Node* root = newNode(stoi(ip[0]));

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

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

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
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// Function for Inorder Traversal
void printInorder(Node* root)
{
    if(!root)
        return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        map<int, map<int,vector<int> > > nodes;
        queue< pair<Node*, pair<int,int> > > q;
        vector<int> ans;

        if(root == NULL)
            return ans;

        q.push(make_pair(root, make_pair(0,0)));

        while(!q.empty()) {
            pair<Node*, pair<int,int> > temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            nodes[hd][lvl].push_back(frontNode->data);

            if(frontNode->left)
                q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1) ));

            if(frontNode->right)
                q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
        }

        for(auto i: nodes) {

            for(auto j:i.second) {

                for(auto k:j.second)
                {
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};



// { Driver Code Starts.
int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        // string c;
        // getline(cin,c);
        Solution obj;
        Node* root = buildTree(s);

        vector <int> res = obj.verticalOrder(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}


  // } Driver Code Ends
*/
//================================================================================

// Top view of binary tree
//=======================

/*
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

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


// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };

class Solution
{
public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }

        map<int, int> topNode;
        queue<pair<Node *, int>> q;

        q.push(make_pair(root, 0));

        while (!q.empty())
        {
            pair<Node *, int> temp = q.front();
            q.pop();
            Node *frontNode = temp.first;
            int hd = temp.second;

            // if one value is present for a HD, then do nothing
            if (topNode.find(hd) == topNode.end())
                topNode[hd] = frontNode->data;

            if (frontNode->left)
                q.push(make_pair(frontNode->left, hd - 1));
            if (frontNode->right)
                q.push(make_pair(frontNode->right, hd + 1));
        }

        for (auto i : topNode)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int tc;
    cin >> tc;
    cin.ignore(256, '\n');
    while (tc--)
    {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        vector<int> vec = ob.topView(root);
        for (int x : vec)
            cout << x << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends
*/
//=============================================================================

// Bottom view of bianry tree
//==========================

/*
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

vector<int> bottomView(Node *root);

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

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
// Function to return a list containing the bottom view of the given tree.

class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }

        map<int, int> topNode;
        queue<pair<Node *, int>> q;

        q.push(make_pair(root, 0));

        while (!q.empty())
        {
            pair<Node *, int> temp = q.front();
            q.pop();
            Node *frontNode = temp.first;
            int hd = temp.second;

            topNode[hd] = frontNode->data;

            if (frontNode->left)
                q.push(make_pair(frontNode->left, hd - 1));
            if (frontNode->right)
                q.push(make_pair(frontNode->right, hd + 1));
        }

        for (auto i : topNode)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--)
    {
        string s, ch;
        getline(cin, s);
        Node *root = buildTree(s);
        Solution ob;
        vector<int> res = ob.bottomView(root);
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
*/
//=====================================================================================

// Left view of binary tree
//=========================

/*
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

vector<int> leftView(struct Node *root);

// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // for(string i:ip)
    //     cout<<i<<" ";
    // cout<<endl;
    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        string s;
        getline(cin, s);
        Node *root = buildTree(s);
        vector<int> vec = leftView(root);
        for (int x : vec)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

//  A binary tree node

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

// Function to return a list containing elements of left view of the binary tree.
void solve(Node *root, vector<int> &ans, int level)
{
    // base case
    if (root == NULL)
        return;

    // we entered into a new level
    if (level == ans.size())
        ans.push_back(root->data);

    solve(root->left, ans, level + 1);
    solve(root->right, ans, level + 1);
}

vector<int> leftView(Node *root)
{
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
*/
//====================================================================================

// Right view of binary tree
//=========================

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};
// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// } Driver Code Ends
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
public:
    // Function to return list containing elements of right view of binary tree.
    void solve(Node *root, vector<int> &ans, int level)
    {
        // base case
        if (root == NULL)
            return;

        // we entered into a new level
        if (level == ans.size())
            ans.push_back(root->data);

        solve(root->right, ans, level + 1);
        solve(root->left, ans, level + 1);
    }
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        solve(root, ans, 0);
        return ans;
    }
};

// { Driver Code Starts.

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int main()
{
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--)
    {
        string s;
        getline(cin, s);
        Node *root = buildTree(s);

        Solution ob;
        vector<int> vec = ob.rightView(root);
        for (int x : vec)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

//============================================================================================