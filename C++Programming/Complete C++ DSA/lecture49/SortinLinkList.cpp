#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//****Sort 0s ,1s, 2s in Link List*************

// class Node
// {
// public:
//     int data;
//     Node *next;

//     // constructor
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAtHead(Node *&head, int d)
// { // in this way every element we add present in start position ie. show always
//     //                                        // start poition

//     // new node create
//     Node *temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }

// void InsertAtTail(Node *&tail, int d)
// { // starting element present always end position

//     // new node create
//     Node *temp = new Node(d);

//     tail->next = temp;
//     tail = tail->next;
// }

// void print(Node *&head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void InsertAtanyPosition(Node *&tail, Node *&head, int position, int d)
// {
//     //************* insert at starting****************
//     if (position == 1) // if we want to insert element at position 1 becz ourold function only create when there is pre
//     // element is there
//     {
//         InsertAtHead(head, d);
//         return;
//     }
//     //******************Insert at middle****************
//     Node *temp = head;
//     int cnt = 1;
//     while (cnt < position - 1)
//     {
//         temp = temp->next;
//         cnt++;
//     }

//     //***************** insering at last position*******************
//     if (temp->next == NULL)
//     {
//         InsertAtTail(tail, d);
//         return;
//     }

//     // creating a node for d
//     Node *nodeToInsert = new Node(d);
//     nodeToInsert->next = temp->next;

//     temp->next = nodeToInsert;
// }

// Node *SortList(Node *head)
// {
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zeroCount++;
//         }
//         else if (temp->data == 1)
//         {
//             oneCount++;
//         }
//         else if (temp->data == 2)
//         {
//             twoCount++;
//         }
//         temp = temp->next;
//     }

//     temp = head;
//     while (temp != NULL)
//     {
//         if (zeroCount != 0) // means until not become to zero
//         {
//             temp->data = 0;
//             zeroCount--;
//         }
//         else if (oneCount != 0)
//         {
//             temp->data = 1;
//             oneCount--;
//         }
//         else if (twoCount != 0)
//         {
//             temp->data = 2;
//             twoCount--;
//         }

//         temp = temp->next;
//     }
//     return head;
// }
// int main()
// {

//     Node *node1 = new Node(1);

//     // head pointed to node1
//     Node *head = node1; // at head
//     Node *tail = node1; // at tail

//     InsertAtTail(tail, 0);
//     InsertAtTail(tail, 2);
//     InsertAtTail(tail, 1);
//     InsertAtTail(tail, 2);
//     InsertAtTail(tail, 0);
//     print(head);

//     SortList(head);
//     print(head);

//     return 0;
// }

//********second approach***************
//**********In case of when exmple gives us no replacement of data is allowed then we need to use another approaach

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

void SortLinkList(Node *&head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;
   
   

   //Create seperate list 0s,1s,2s
    while (head != NULL)
    {
        Node *target = new Node(head->data);

        if (target->data == 0)
        {
            zeroTail = zeroTail->next = target;
        }
        else if (target->data == 1)
        {
            oneTail = oneTail->next = target;
        }
        else if(target->data ==2)
        {
            twoTail = twoTail->next = target;
        }

        head = head->next;
    }

     //merge 3 sublist
    
     // if 1s list is not empty 
    if (oneHead->next == NULL)
    {
        zeroTail->next = twoHead->next;
    }
    else
    {  //1s list is empty 
        zeroTail->next = oneHead->next;
    }

    oneTail->next = twoHead->next;
    head = zeroHead->next;
}

int main()
{
    Node *head = new Node(0);
    Node *tail = head;

    InsertAtTail(tail, 2);
    InsertAtTail(tail, 0);
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 0);
    InsertAtTail(tail, 0);
    InsertAtTail(tail, 0);
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 0);
    InsertAtTail(tail, 2);

    print(head);

    SortLinkList(head);
    cout << "After sorting : ";
    print(head);

    return 0;
}


// Time Complexity -> O(n)
// Space complexity -> O(1)