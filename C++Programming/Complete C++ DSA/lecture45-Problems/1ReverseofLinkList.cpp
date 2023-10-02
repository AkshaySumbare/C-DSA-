#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/*
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node *&head, int d)
{ // in this way every element we add present in start position ie. show always
    //                                        // start poition

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{ // starting element present always end position

    // new node create
    Node *temp = new Node(d);

    tail->next = temp;
    tail = tail->next;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtanyPosition(Node *&tail, Node *&head, int position, int d)
{
    //************* insert at starting****************
    if (position == 1) // if we want to insert element at position 1 becz ourold function only create when there is pre
    // element is there
    {
        InsertAtHead(head, d);
        return;
    }
    //******************Insert at middle****************
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    //***************** insering at last position*******************
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

//******Reversal the LinkLIst***************
void reverseLinkList(Node *&head)
{
    Node *prev = NULL;

    while (head != NULL)
    {
        Node *curr = head;
        head = head->next;
        curr->next = prev;
        prev = curr;
    }

    head = prev;
}
int main()
{
    Node *head = new Node(1);
    Node *tail = head;

    for (int i = 1; i <= 5; i++)
    {
        InsertAtTail(tail, pow(2, i));
    }
    print(head);

    reverseLinkList(head);
    print(head);

    return 0;
}
   */

//*************************Reversing using the Recursion *************

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node *&head, int d)
{ // in this way every element we add present in start position ie. show always
    //                                        // start poition

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{ // starting element present always end position

    // new node create
    Node *temp = new Node(d);

    tail->next = temp;
    tail = tail->next;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtanyPosition(Node *&tail, Node *&head, int position, int d)
{
    //************* insert at starting****************
    if (position == 1) // if we want to insert element at position 1 becz ourold function only create when there is pre
    // element is there
    {
        InsertAtHead(head, d);
        return;
    }
    //******************Insert at middle****************
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    //***************** insering at last position*******************
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

//**** 1 approach of recursion**********
/*
void reverseLinkList(Node *&head, Node *curr, Node *prev)
{ // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    // Recursion approach
    reverseLinkList(head, curr->next, curr); // Node*forward =curr->next; here we direct writeen
    curr->next = prev;
}   */

//*********** 2 approach using recursion**********
Node *reverseLinkList2(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    
    //recursion approach
    Node *curr = reverseLinkList2(head->next);
    head->next->next = head;
    head->next = NULL;
    return curr;
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;

    for (int i = 1; i <= 5; i++)
    {
        InsertAtTail(tail, pow(2, i));
    }
    print(head);

   // reverseLinkList(head, head, NULL);
   // print(head);

    head = reverseLinkList2(head);
    print(head);

    return 0;
}


//**Time complexity of both solutions are O(n)