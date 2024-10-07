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
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int height = max(leftHeight , rightHeight)+1;
        return height ;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
       
        int Option1 = diameterOfBinaryTree(root->left);
        int Option2 = diameterOfBinaryTree(root->right);
        int Option3 = height(root->left) + height(root->right) ;
        int diameter = max(Option1 , max(Option2 , Option3));


    return diameter;
    }
};