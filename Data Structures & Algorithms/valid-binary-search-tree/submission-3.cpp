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
    long long minval=LLONG_MIN;
    bool isValidBST(TreeNode* root) {
        if(!root) return 1;
        if(!isValidBST(root->left)) return 0;
        if(root->val<=minval) return 0;
        
        minval=root->val;
        return isValidBST(root->right);

    }
};
