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
    int goodNodes(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,INT_MIN});
        if(!root) return 0;
        int ans=0;
        while(!q.empty()){
            auto [node,maxval]=q.front();
            q.pop();
            if(node->val>=maxval) ans++;
              
            if(node->left)    q.push({node->left,max(node->val,maxval)});
            if(node->right)    q.push({node->right,max(node->val,maxval)});
            
        }
        return ans;
    }
};
