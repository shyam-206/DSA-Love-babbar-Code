#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class TreeNode {
    public:
        int val;
        TreeNode* left;
        TreeNode* right;

    TreeNode(int d) {
        this -> val = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

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
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> ans;
       inorder(root,ans);
       return ans; 
    }

    void inorder(TreeNode* root,vector<int>& ans){
        if(root == NULL)
            return;

        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
};

int main()
{
    return 0;
}