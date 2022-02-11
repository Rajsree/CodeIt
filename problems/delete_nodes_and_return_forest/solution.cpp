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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> res;
        set<int> toDelete;
        for(int it: to_delete) {
             toDelete.insert(it);             
        }
        process(root, res, toDelete, true);
        return res;
       
    }

    TreeNode* process(TreeNode* root, vector<TreeNode*>& res, set<int>& toDelete, bool is_root) {
        if(root==NULL) {
            return NULL;
        }
        
        bool deleted = toDelete.find(root->val)!=toDelete.end();
        
        
        if(is_root && !deleted) {
            res.push_back(root);
        }
        root->left = process(root->left, res, toDelete, deleted);
        
        root->right = process(root->right, res, toDelete, deleted);
        
        return deleted? NULL : root;
    }
};