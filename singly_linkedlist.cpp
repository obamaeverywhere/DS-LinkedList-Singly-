#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linkedlist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    // tmp ekhn pos-1 e
    newNode->next = tmp->next;
    tmp->next = newNode;
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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *tail = e;
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "invalid index";
    }
    else if (pos == 0)
    {
        insert_head(head, val);
        print_linkedlist(head); 
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
        print_linkedlist(head);
    }
    else
    {
        insert(head, pos, val);
        print_linkedlist(head);
    }
    
}