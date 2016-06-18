bool flip(TreeNode* left, TreeNode* right)
{
    if(left != NULL && right == NULL){return 0;}
    if(left == NULL && right != NULL){return 0;}
    if(left == NULL && right == NULL){return 1;}
    if(left->val != right->val){return 0;}
    return flip(left->left, right->right) && flip(left->right, right->left);
}

bool symm(TreeNode* root)
{
    if(root == NULL){return 1;}
    return flip(root->left, root->right);
}
