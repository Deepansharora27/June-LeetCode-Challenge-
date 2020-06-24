/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        //Assuming that we have Already Taken into Account the Root Node:
        if (root == NULL)
        {
            return 0;
        }

        int leftSide = countNodes(root->left);
        int RightSide = countNodes(root->right);

        return leftSide + RightSide + 1;
    }
};