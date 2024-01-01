class Solution
{
public:
    bool evaluateTree(TreeNode *root)
    {
        // leaf er case
        if (root->val <= 1)
            return root->val;

        // or case
        if (root->val == 2)
        {
            return evaluateTree(root->left) or evaluateTree(root->right);
        }
        // and case

        return evaluateTree(root->left) and evaluateTree(root->right);
    }
};