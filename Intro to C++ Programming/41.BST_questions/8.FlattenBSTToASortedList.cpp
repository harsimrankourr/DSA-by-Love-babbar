/*

void inorder(TreeNode<int> *root, vector<int> &in)
{

    if (root == NULL)
        return;

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

TreeNode<int> *flatten(TreeNode<int> *root)
{

    vector<int> inorderVal;

    // Store inorder -> sorted values
    inorder(root, inorderVal);
    int n = inorderVal.size();

    //creating nodes for the values stored in the array and we are making sure all the nodes must be connected
    TreeNode<int> *newwRoot = new TreeNode<int>(inorderVal[0]);

    TreeNode<int> *curr = newRoot;

    // 2nd step
    for (int i = 1; i < n; i++)
    {

        TreeNode<int> *temp = new TreeNode<int>(inorderVal[i]);

        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }

    // 3rd step
    curr->left = NULL;
    curr->right = NULL;

    return newRoot;
}

*/