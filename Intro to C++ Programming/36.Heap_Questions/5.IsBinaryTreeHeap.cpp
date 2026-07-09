/*

int countNodes(struct Node *root)
{
    // base count
    if (root == NULL)
        return 0;

    int ans = 1 + countNodes(root->left) + countNodes(root->right);
    return ans;
}

bool isCBT(struct Node *root, int index, int cnt)
{
    if (root == NULL)
        return true;

    if (index >= cnt)
        return false;

    else
    {
        bool left = isCBT(root->left, 2 * index + 1, cnt);
        bool right = isCBT(root->right, 2 * index + 2, cnt);
        return (left && right);
    }
}

bool isMaxorder(struct Node *root)
{

    // leaf node
    if (root->left == NULL && root->right == NULL)
        return true;

    if (root->right == NULL)
    {
        return (root->data > root->left->data);
    }
    else
    {
        bool left = isMaxorder(root->left);
        bool right = isMaxorder(root->right);

        return (left && right && (root->data > root->left->data && root->data > root->right->data));
        return true;
    }
}

bool isHeap(struct Node *root)
{

    int index = 0;
    int totalCount = countNodes(tree);
    if (isCBT(tree, index, totalCount) && isMaxorder(tree))
    {
        return true;
    }
    else
        return false;
}

*/