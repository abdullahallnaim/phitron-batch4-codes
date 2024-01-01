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

void insert_at_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << "->";
        head = head->next;
    }
}

void insert_at_tail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    Node *temp = head;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    cout << temp->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insert_at_head(head, 10);
    insert_at_head(head, 20);
    print(head);
    cout << endl;
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);
    print(head);
    return 0;
}
