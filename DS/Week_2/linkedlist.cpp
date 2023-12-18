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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    // first case
    if (head == NULL)
    {
        head = newNode; // boss er chair fill up korlam
        return;
    }
    // second case : ll e element ache
    Node *tmp = head;
    while (tmp->next != NULL) // last er ager element e chole aschi
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode; // temp ->next = newnode;
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v); // new node baniyechi
    Node *tmp = head;
    // pos - 2 mane position
    // post - 1 mane index
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next; // pos 1 ghor ag obdi gelam
    }
    newnode->next = tmp->next; // new->next null chilo seta update hobe
    tmp->next = newnode;       // newnode er nijer address ta tmp->next e set hobe
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void delete_at_tail(Node *&head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        head = NULL;
        return;
    }
    Node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = NULL;
}

int main()
{
    Node *head = NULL;
    insert_at_head(head, 10);
    // insert_at_head(head, 100);
    // insert_at_position(head, 2, 144);
    print_linked_list(head);
    delete_at_tail(head);
    print_linked_list(head);

    return 0;
}