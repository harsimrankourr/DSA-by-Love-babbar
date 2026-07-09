// Search in BST
//=============

/*
bool searchInBST(BinaryTreeNode<int> *root, int x)
{

    // base case
    if (root == NULL)
    {

        return false;
    }
    if (root->data == x)
        return true;

    if (root->data > x)
    {
        // Left part me
        return searchInBST(root->left, x);
    }
    else
    {
        // right part me
        return searchInBST(root->right, x);
    }
};

*/

// T.c here is O(H) or O(n) in worst case
// S.C here is O(H)

// if we done this problem in iterative way than recursive way then space complexity will become constant

/*
bool searchInBST(BinaryTreeNode<int> *root, int x)
{

    BinaryTreeNode<int> *temp = root;

    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }

        if (temp->data > x)
        {
            temp = temp->left;
        }

        else
        {
            temp = temp->right;
        }
    }
    return false;
};

*/ 