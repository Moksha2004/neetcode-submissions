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
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*,int>>s;
        s.push({root,1});
        int ans=0;
        while(!s.empty()){
            pair<TreeNode*,int>p=s.top();
            s.pop();
            int l=p.second;
            if(p.first){
                ans=max(ans,l);
                s.push({p.first->left,l+1});
                s.push({p.first->right,l+1});
            }
        }
        return ans;
    }
};
