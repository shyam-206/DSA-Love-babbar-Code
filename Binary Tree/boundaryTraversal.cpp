#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

class Solution {
public:
    void traversalLeft(Node* root,vector<int>& ans){
        
        if((root ==NULL) || ( root->left == NULL && root->right == NULL))
            return;
        
        ans.push_back(root->data); 
        
        if(root->left)
            traversalLeft(root->left,ans);
        else
            traversalLeft(root->right,ans);
    }
    
    void traversalLeaf(Node* root,vector<int>& ans){
        
        if(root == NULL)
            return;
            
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
        
        traversalLeaf(root->left,ans);
        traversalLeaf(root->right,ans);
    }
    
    
    void traversalRight(Node* root,vector<int>& ans){
        
        if((root ==NULL) || ( root->left == NULL && root->right == NULL))
            return;
        
        
        if(root->right)
            traversalRight(root->right,ans);
        else
            traversalRight(root->left,ans);
        
        ans.push_back(root->data);     
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root == nullptr) return ans;
        
        ans.push_back(root->data);
        
        //traversal left boundary node except leaf node.
        traversalLeft(root->left,ans);
        
        //traversal leaf
        
        //left subtree
        traversalLeaf(root->left,ans);
        //right subtree
        traversalLeaf(root->right,ans);
        
        //traversal right boundary node except leaf node
        traversalRight(root->right, ans);
        
        return ans;
    }
};
