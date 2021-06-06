/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int getDegree(TreeNode *head)
    {
        if(!head)   return 0;
        return max(getDegree(head->left), getDegree(head->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)   return true;
        int left_height = getDegree(root->left);
        int right_height = getDegree(root->right);
        if(abs(left_height - right_height) > 1)
        {
            return false;
        }
        else
        {
            return (isBalanced(root->left) && isBalanced(root->right));
        }
    }
};