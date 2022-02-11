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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string, vector<TreeNode*>> subtreestr;
        vector<TreeNode*> res;
        serialize(root, subtreestr);
        // sort(subtreestr.begin(), subtreestr.end());
        for(auto it: subtreestr) {
            if(it.second.size()>1) {
                res.push_back(it.second[0]);
            }
        }
        return res;
    }
    string serialize(TreeNode* root, unordered_map<string, vector<TreeNode*>>& subtreestr){
        if(root==NULL) {
            return "";
        }
        string a = '(' + serialize(root->left, subtreestr) + to_string(root->val) + serialize(root->right, subtreestr) + ')';
        subtreestr[a].push_back(root);
        
        return a;        
    }
};