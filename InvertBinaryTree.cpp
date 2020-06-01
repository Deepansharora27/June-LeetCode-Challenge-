
/*

PROBLEM STATEMENT : 

Invert a binary tree.

Example:

Input:

     4
   /   \
  2     7
 / \   / \
1   3 6   9
Output:

     4
   /   \
  7     2
 / \   / \
9   6 3   1echo "# June-LeetCode-Challenge-" >> README.md


*/



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
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return NULL ; 
        }
        
        //Making the Recursive Calls at Each DFS : 
       TreeNode* left =  invertTree(root->left); 
        TreeNode* right = invertTree(root->right); 
        
        //Now , Performing the Small Calculation part : 
        root->left = right ;   
        root->right = left ;   
        
        return root ; 
    }
};
