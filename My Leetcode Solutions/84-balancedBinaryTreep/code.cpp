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
class Solution
{
public:
    int height(TreeNode *node)
    {
        if (node == NULL)
            return 0;

        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;
        return ans;
    }
    bool isBalanced(TreeNode *root)
    {
        if (!root)
            return true;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff = abs(height(root->left) - height(root->right)) <= 1;

        if (left && right && diff)
        {
            return true;
        }
        return false;
    }
};


// optimized solution
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
class Solution
{
public:

    pair<bool, int> isBalancedFast(TreeNode *root)
    {

        // Base Case for the height and balanced.
        if (!root)
        {
            return make_pair(true, 0);
        }

        // finding the height and balanced for the right and the left tree
        pair<bool, int> left = isBalancedFast(root->left);
        pair<bool, int> right = isBalancedFast(root->right);

        // working for the balanced tree
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        // handling the height of the tree condition
        ans.second = max(left.second, right.second) + 1;

        // handling the balanced tree condition
        if (leftAns && rightAns && diff)
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }

        return ans;
    }
    bool isBalanced(TreeNode *root)
    {

        return isBalancedFast(root).first;
    }
};

