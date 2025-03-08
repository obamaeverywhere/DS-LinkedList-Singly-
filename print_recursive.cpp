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
void print_recursion(Node* n)
{
    if(n==NULL) return;
    print_recursion(n->next); //reverse print
    cout<<n->val<<" ";
   
}
int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    head->next=b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_recursion(head);
}