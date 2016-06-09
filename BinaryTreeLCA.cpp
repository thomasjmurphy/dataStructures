struct tree
{
    int val;
    tree* left;
    tree* right;
};

bool hasNode(tree* root, tree* p, tree* q)
{
    if(root == NULL){return 0;}
    if(root == p || root == q){return 1;}
    tree* left = root->left;
    tree* right = root->right;
    return (hasNode(left,p,q) || hasNode(right,p,q));
}

tree* LCA(tree* root, tree* p, tree* q)
{
    if(root == NULL){return NULL;}
    if(root == p || root == q){return root;}
    tree* L = root->left;
    tree* R = root->right;
    if(hasNode(L,p,q) && hasNode(R,p,q))
    {
        return root;
    }
    if(hasNode(L,p,q))
    {
        return LCA(L,p,q);
    }
    else
    {
        return LCA(R,p,q);
    }
}
