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

// class Solution {
// public:
//     int height(TreeNode* root){
//         if(!root) return 0;
//         return 1+max(height(root->left),height(root->right));
// }
//     bool isBalanced(TreeNode* root) {
//         if(!root) return 1;
//         int l=height(root->left);
//         int r=height(root->right);
//         if(abs(l-r)>1) return 0;
//         return isBalanced(root->left)&&isBalanced(root->right);
//     }
// };

class Solution {
    public:
    bool isbalance;
    int dfs(TreeNode* root){
        if(!root) return 0;
        int l=dfs(root->left);
        int r=dfs(root->right);
        if(abs(l-r)>1) isbalance=false;
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root){
        isbalance=true;
        if(!root) return true;
        dfs(root);
        return isbalance;
    }

};