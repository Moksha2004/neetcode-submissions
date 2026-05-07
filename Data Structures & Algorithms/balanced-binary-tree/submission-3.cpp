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
    int balance=1;
    public:
    int h(TreeNode*root){
        if(!root) return 0;
        int l=h(root->left),r=h(root->right);
        if(abs(l-r)>1) balance=0;
        return 1+max(l,r);
    }
    
    bool isBalanced(TreeNode* root){
      if(!root) return 1;
      h(root);
      return balance;
    }

};