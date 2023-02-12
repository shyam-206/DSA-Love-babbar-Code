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
void insertAtHead(Node* &head,int val)
{
    //creating temporary node 
    Node* temp = new Node(val);
    //empty list
    if(head==NULL){
       head=temp;
    }
    else{
     
      temp->next = head;
      head = temp;
    }
}

void insertAtTail(Node* &head,int val)
{
  Node* Newnode= new Node(val);
  
  if(head==NULL)
  {
     head=Newnode;
  }
  else{
    Node* curr = head;
    while(curr->next!=NULL)
    {
      
       curr = curr->next;
    }
    
    curr->next = Newnode;
  } 
}

void insertAtPosition(Node* &head,int position,int val)
{
   // temp = new Node 
   Node* temp = new Node(val); 
   if(head==NULL)
   {
      head = temp;
   }
   if(position == 1)
   {
      temp->next = head;
      head = temp;
   }
   else{
  
   Node* curr = head;
   int cnt = 1;
   
   while(cnt < position-1)
   {
      curr = curr->next;
      cnt++;
   }

   temp->next = curr->next;
   
   curr->next = temp;
  }
}
void deleteNode(Node* &head,int position) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}


void printList(Node* head)
{
   Node* curr = head;
   while(curr!=NULL){
     cout<<curr->data<<" ";
     curr=curr->next;
   }
   cout<<endl;
 
}


int main()
{
    Node* head = NULL;
    
    insertAtHead(head,20);
    printList(head);
    insertAtHead(head,10);
    printList(head);
    insertAtTail(head,40);
    printList(head);
    insertAtPosition(head,3,30);
    printList(head);
    deleteNode(head,4);
    printList(head);
    return 0;
    
}