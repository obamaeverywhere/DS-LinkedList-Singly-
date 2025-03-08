#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val) {
        this->val=val;
        this->next=NULL;
        }
};

void insert_at_tail(Node * &head,int v) {
    Node *newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    // tmp ekhn last node e
    tmp->next=newNode;
}

void print_linked_list(Node *head) {
    cout<<"your linked list:";
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void insert_at_position(Node* head,int pos,int v){
    Node* newNode=new Node (v);
    Node* tmp=head;
    for(int i=0;i<pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}

void insert_at_head(Node* &head,int v){
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}

int main()
{
   Node *head=NULL;
   while(true){
   cout<<"Option 1: insert at tail"<<endl ;
   cout<<"Option 2: print linked list"<<endl ;
   cout<<"Option 3: insert at any position"<<endl ;
   cout<<"Option 4: insert at head"<<endl ;
   cout<<"Option 5: terminate"<<endl ;
   int op;
   cin>>op;
    if(op==1) {
    int v;
    cin>>v;
    insert_at_tail(head,v);
   }
    else if(op==2) {
        print_linked_list(head);
    }
    else if(op==3) {
        int pos,v;
        cin>>pos;
        cin>>v;
        if(pos==0){
            insert_at_head(head,v);
        }
       else
        insert_at_position(head,pos,v);
    }
    else if (op==4){
        int v;
        cin>>v;
        insert_at_head(head,v);
    }
    else if(op==5){
        break;
    }
   }
}