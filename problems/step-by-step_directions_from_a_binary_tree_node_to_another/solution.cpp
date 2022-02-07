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
    string getDirections(TreeNode* root, int startValue, int destValue) {
      TreeNode* lca = getAncestor(root, startValue, destValue);
        string path_from_start="", path_to_dest="";
        drawPath(lca, startValue, path_from_start);
        drawPath(lca, destValue, path_to_dest);
        
        for(auto& c: path_from_start){
           c = 'U';
        }
        return path_from_start + path_to_dest;
    
    }
    TreeNode* getAncestor(TreeNode* root, int start, int dest){
        if(root==NULL || root->val==start || root->val==dest) {
            return root;
        }
        
        TreeNode* left = getAncestor(root->left, start, dest);
        TreeNode* right = getAncestor(root->right, start, dest);
        
        if(left&&right) {
            return root;
        }
        return (left==NULL) ? right : left;
    }
    bool drawPath(TreeNode* parent, int val, string& path) {
        if(parent==NULL) {
            return false;
        }
        if(parent->val == val ) {
            return true;
        }
        
        //Left
        path.push_back('L');
        if(drawPath(parent->left, val, path)) return true;
        path.pop_back();
        
        //Right
        path.push_back('R');
        if(drawPath(parent->right, val, path)) return true;
        path.pop_back();
        
        
        return false;
    }
};

// startVal < Node ||  startVal > Node => 
// dest > Node  || dest <Node 
// parse the tree, if(roo->val) == startVal 
// LCA Lowest Common Ancestor
//