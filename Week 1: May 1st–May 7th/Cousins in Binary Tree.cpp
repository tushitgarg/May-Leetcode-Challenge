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

vector<int> find(TreeNode* root, int a, int h,int parent)
{
     vector<int> l,r;
    if(root==NULL)
        return {};
    if(root->val==a)
        return {h,parent};
    l = find(root->left,a,h+1,root->val);
    if(!l.empty())
        return l;
    r = find(root->right,a,h+1,root->val);
    return r;
}

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        vector<int> xx,yy;
        xx = find(root,x,0,-1);
        yy = find(root,y,0,-1);
        if(xx[0]==yy[0] && xx[1]!=yy[1])
            return true;
        else
            return false;
    }
};