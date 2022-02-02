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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int s = 0;
        return helper(root, s, targetSum);
    }
    bool helper(TreeNode* root, int s, int targetSum) {
        if(root!=NULL) {
              s+=root->val;
        cout << '\n' << root->val << "Sum : " <<s ;
        if(s==targetSum && !root->left && !root->right) {
            return true;
        }
          
            return helper(root->left, s, targetSum) || helper(root->right, s, targetSum);
        
         }
       return false;
    }
};