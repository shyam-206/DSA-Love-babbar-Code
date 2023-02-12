#include<iostream>
#include<vector>
//#include<bit/stdc++.h>

using namespace std;

class ListNode{

 public:
    int val;
    ListNode* next;
    
    ListNode(int data){
      this->val=data;
      this->next=NULL;
    }
};

void deleteNode(ListNode* head){
    ListNode* temp = head->next;
    head->val = (head->next)->val;
    head->next = head->next->next;
    delete(temp);
}