// before this question understand the concept of morris traversal

// flatten binary tree to linked list
//==================================

/*
class solution
{

public:
    void flatten(Node *root)
    {
        Node *curr = root;
        while (curr != NULL)
        {

            if (curr->left)
            {
                Node *pred = curr->left;
                while (pred->right)
                    pred = pred->right;

                pred->right = curr->right;
                curr->right = curr->left;

                // Or
                curr->left = NULL;
            }
            curr = curr->right;
        }

        // or
        //  //making left part null
        //  curr = root;
        //  while(curr != NULL){
        //      curr -> left = NULL;
        //      curr = curr -> right;
        //  }
    }
};

*/