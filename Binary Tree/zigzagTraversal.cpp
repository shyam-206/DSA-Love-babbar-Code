#include<iostream>
#include<bits/stdc++.h>
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> result;
        //base case
        if(!root) return result;
        queue<TreeNode*> q;
        q.push(root);
        int currLevel = 1;

        while(!q.empty()){

            int size = q.size();
            vector<int> arr(size);
            
            for(int i=0;i<size;i++){
                TreeNode* frontNode = q.front();
                q.pop();

                arr[i] = frontNode->val;
                if(frontNode->left != NULL)
                    q.push(frontNode->left);
                if(frontNode->right != NULL)
                    q.push(frontNode->right);
            }

            if(currLevel%2 == 0)
                reverse(arr.begin(),arr.end());
            result.push_back(arr);
            currLevel++;
        }
    
        return result;
    }
};