#include<iostream>
using namespace std;

class Node{

 public:
    int data;
    Node* next;
    
    Node(int data){
      this->data=data;
      this->next=NULL;
    }
};

Node* reverse1(Node* head){

    if(head == NULL || head->next = NULL){
        return head;
    }

    Node* choteHead = reverse1(head->next);

   head->next->next = head;
   head->next =  NULL;

   return choteHead; 

}

void reverse(Node* &head,Node* curr,Node* prev){

    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}

Node* reverseList(Node* &head){

    Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;


    // if(head == NULL || head->next == NULL){
    //     return head;
    // }

    // Node* prev = NULL;
    // Node* curr = head;
    // Node* forward = NULL;

    // while(curr != NULL){
    //     forward = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = forward;
    // }

    // return prev;

}



int main()
{
    
    return 0;
}