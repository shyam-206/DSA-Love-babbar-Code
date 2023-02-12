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

bool search(Node* &head,int x){
    
    if(head == NULL){
        return false;
    }

    if(head->data == x){
        return true;
    }

    return search(head->next,x);
}

int main(){

    return 0;
}