#include<iostream>
using namespace std;
struct Node{
int data;
Node*next;
};

void show(Node*head){
    Node*temp=head;
while(temp!=NULL){
    cout<<temp->data<<"-> ";
    temp=temp->next;
}
}

void insertAtEnd(Node*head,Node*newNode){
Node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;  }
temp->next=newNode;
newNode->next=NULL;}

void insertAfterValue(Node*head,Node*newNode,int value){
Node*temp=head;
while(temp->next!=NULL && temp->data!=value){
    temp=temp->next;}
    if(temp==NULL){
        cout<<"not found"<<endl;
        return;
        }
    else{newNode->next=temp->next;
    temp->next=newNode;}
}

void beforeValue(Node*head,Node*newNode,int val){
Node*temp=head;
Node*prev=NULL;
while(temp->next!=NULL && temp->data!=val){
    prev=temp;
    temp=temp->next;
}
if(temp==NULL){
 cout<<"not found"<<endl;
return;
}
if(prev==NULL){
    newNode->next=head;//add before head
    head=newNode;
}
else{

    newNode->next=temp;
    prev->next=newNode;
}
}

void deletenode(Node*head,int val){
Node*temp=head;
Node*prev=NULL;
while(temp->next!=NULL&& temp->data!=val){
    prev=temp;
    temp=temp->next;
}
if(temp==NULL){
    cout<<"not found"<<endl;
    return;
}
if(prev==NULL){
    head=temp->next;//delete head
    delete temp;
}
else if(temp==NULL){
    prev->next=NULL;
    delete temp;//delete last
}
else{prev->next=temp->next;
delete temp;}
}

 int main(){
 Node*n1=new Node();
 Node*n2=new Node();
 Node*head=n1;
 n1->data=10;
 n2->data=20;
 n1->next=n2;
 n2->next=NULL;
 show(head);
 cout<<endl;
 Node*n3 =new Node();
 n3->data=30;
 insertAtEnd(head,n3);
 Node*n4=new Node();
 n4->data=40;
 insertAtEnd(head,n4);
 show(head);
  cout<<endl;
 Node*n5=new Node();
 n5->data=50;
 insertAfterValue(head,n5,20);
 show(head);
  cout<<endl;
 Node*n6=new Node();
 n6->data=60;
 beforeValue(head,n6,40);
 show(head);
  cout<<endl;
 deletenode(head,60);
 show(head);
  cout<<endl;
 return 0;}





