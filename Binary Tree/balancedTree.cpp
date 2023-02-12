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
    int height(TreeNode* node){
        if(node == NULL)
            return 0;
        
        int left = height(node->left);
        int right = height(node->right);
        return max(left,right) + 1;
    }

    pair<bool,int> isBalancedFast(TreeNode* root){
        if(root == NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }

        pair<bool,int> left = isBalancedFast(root->left);
        pair<bool,int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <= 1;

        pair<bool,int> ans;
        ans.second = max(left.second,right.second) + 1;

        if(leftAns && rightAns && diff){
            ans.first = true;
        }
        else{
            ans.first = false;
        }

        return ans;
    }

    bool isBalanced(TreeNode* root) {

        //Approach 1 TC = o(n^2)
        /*if(root == NULL) 
            return true;
        
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff = abs(height(root->left) - height(root->right)) <= 1;

        if(left && right && diff)
            return true;
        else
            return false;*/

        //Approach 2 TC = o(n)
        return isBalancedFast(root).first;
    }
};
