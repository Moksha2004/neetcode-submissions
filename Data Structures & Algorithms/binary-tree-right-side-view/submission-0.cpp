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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;
        if(!root) return {};
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            TreeNode*rightnode=nullptr;
            for(int i=s;i>0;i--){
                auto t=q.front();
                q.pop();
                if(t){
                    rightnode=t;
                    q.push(t->left);
                    q.push(t->right);
                }
                      }
        if(rightnode) ans.push_back(rightnode->val);
        }
        return ans;}
    
};
