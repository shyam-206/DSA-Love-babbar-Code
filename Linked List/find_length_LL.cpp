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

int findLength(Node* &head){

    Node* temp = head;
    int length = 0;
    while(temp!=NULL){
        temp = temp->next;
        length++;
 
   }

   return length;
}



int main()
{


 return 0;
}