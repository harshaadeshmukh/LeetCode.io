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
    int checkBalanced(TreeNode *root)
    {
        if(root==nullptr)
        {
            return 0;
        }

        int leftTree = checkBalanced(root->left);
        if(leftTree == -1)
        {
            return -1;
        }

         int rightTree = checkBalanced(root->right);
        if(rightTree == -1)
        {
            return -1;
        }

        if(abs(leftTree - rightTree) > 1 )
        {
            return -1;
        } 
        return max(leftTree,rightTree)+1;
        
    }

    bool isBalanced(TreeNode* root) {
        return checkBalanced(root) != -1;
    }
};