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
void delete_node(Node* head,int pos){
    Node* tmp=head;

    for(int i=0;i<pos-1;i++){
        tmp=tmp->next;
    }
    Node* deletenode= tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
}
void print_linkedlist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void delete_head(Node* &head){
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    int pos;
    cin>>pos;
   if(pos>=size(head)){
    cout<<"Invalid Index";
   }
   else if(pos==0){
    delete_head(head);
    print_linkedlist(head);
   }
   else {
    delete_node(head,pos);
    print_linkedlist(head);
   }
}