/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */

// @lc code=start
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
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return aux(root->left, root->right);
    }

    bool aux(TreeNode* l, TreeNode* r) {
        if (!l && !r)
        {
            return true;
        }
        if(!l || !r)
        {
            return false;
        }
        if(l->val==r->val)
        {
            bool flag1 = aux(l->left, r->right);
            bool flag2 = aux(l->right, r->left);
            return flag1 && flag2;
        }
        else
            return false;
    }
};
// @lc code=end
