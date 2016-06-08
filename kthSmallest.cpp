#include <iostream>
using namespace std;

//Finding the kthSmallest element in a Binary Search Tree

struct tree
{
int val;
tree* left;
tree* right;
tree(int val) : val(val), left(NULL), right(NULL) {}
};

int kthSmallest(tree* root, int &k, int &val)
{
    if(root == NULL){return -1;}
    kthSmallest(root->left, k, val);
    if(k == 1){val = root->val;} 
    k--; 
    kthSmallest(root->right, k, val);
    return val;
}
