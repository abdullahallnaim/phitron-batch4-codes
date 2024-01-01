class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        // base case
        if (root == NULL)
            return root;

        // swap
        invertTree(root->left);
        invertTree(root->right);

        swap(root->left, root->right);
        return root;
    }
};