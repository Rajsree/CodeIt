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
        return findDepth(root, 0);
    }
    int findDepth(TreeNode* root, int depth){
        if(root==NULL) {
            return 0;
        }
        
        if(!root->left && !root->right) {
            depth++;
            return 1;
        }
        
        return max(findDepth(root->left, depth), findDepth(root->right, depth)) + 1;
    }
};