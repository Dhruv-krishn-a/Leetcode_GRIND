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
    int height(TreeNode* root ){
        if(root == 0 ){
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int finalans = max(leftHeight , rightHeight)+1;
        return finalans;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true ;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int diff = abs(leftHeight - rightHeight);

        bool currNodeAns = (diff<=1);

        bool leftAns = isBalanced(root->right);
        bool rightAns = isBalanced(root->left);

        if(currNodeAns && leftAns && rightAns){
            return true ;
        }else {
            return false;
        }
    }
};