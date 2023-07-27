/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        return helper( root, p, q);
    }

        TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q){

                  if(root == NULL) return NULL;  

                  if(p->val == root->val || q->val == root->val) return root;

                  TreeNode* left_lca = helper(root->left, p, q);
                  TreeNode* right_lca = helper(root->right, p, q);

                  if(left_lca && right_lca) return root;

                  return (left_lca != NULL) ? left_lca : right_lca;
        }
    
};