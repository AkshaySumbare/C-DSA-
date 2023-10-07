
#include <iostream>
#include<map>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node* random;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random=NULL;
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

//**************************************************

void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *newNode = new Node(d);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}  

Node *copyList(Node *head)
{
    // step1- create a clone node
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;

    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }
    //step 2 : create a map

    unordered_map<Node*, Node*> oldToNewNode;
    
     Node* originalNode = head;
    Node* cloneNode = cloneHead;
    while (originalNode != NULL)
    {
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
     
     originalNode = head;
     cloneNode = cloneHead;

     while (originalNode != NULL)
     {
        cloneNode->random = oldToNewNode[originalNode->random];
         originalNode = originalNode->next;
        cloneNode = cloneNode->next;
     }
     return cloneHead;
    
}

int main()
{
     Node *head = new Node(5);;

    InsertAtHead(head, 4);
    InsertAtHead(head, 3);
    InsertAtHead(head, 2);
    InsertAtHead(head, 1);
    print(head);
     
    cout << "Original List : ";
    print(head);

    Node *clone = copyList(head);

    cout << "Clone List : ";
    print(clone);

    return 0;
}  


//Time comlexity-->O(N)
// Space Complexity ---> O(N)