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
    void recoverTree(TreeNode* root) {
        bool swapped = false;
        int first,second;
        vector<int> inordervals;
        helper(root, inordervals);
        for(int i=0; i<inordervals.size()-1; i++) {
            if(inordervals[i] > inordervals[i+1]) {
                second = inordervals[i+1];
                if(!swapped) {
                    first = inordervals[i];
                    swapped = true;
                } else {
                    break;
                }
                
            }
        }
        
        createTree(root, 2, first, second);
        
    }
    void helper(TreeNode* root, vector<int>&  res) {
        if(root!=NULL) {
        helper(root->left, res);
        res.push_back(root->val);
        helper(root->right,res);
        }
    }
    void createTree(TreeNode* root, int count, int x, int y) {
        if(root!=NULL) {
            if(root->val == x || root->val == y) {
                root->val = root->val==x ? y : x;
                if(--count==0) return;
            }
            createTree(root->left,count,x,y);
            createTree(root->right,count,x,y);
        }
    }
};