#include <iostream>
using namespace std;

// 2)***************Doubly Link list **************************
//                   1               2     3
//  stucture-->  |previous pointer|Data|next pointer|

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// int getlength(Node* head){
//     int len=0;
//     Node*temp=head;
//     while (temp!=NULL)
//     {
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }

void InsertAthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert at first position
    if (position == 1)
    {
        InsertAthead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insering at last position
    if (temp->next == NULL)
    {

        InsertAtTail(tail, d);
        return;
    }

    // creating for any d between first and last

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
}
int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    InsertAthead(head, 34);
    print(head);

    Node *tail = node1;
    InsertAtTail(tail, 4);
    print(head);

    InsertAtPosition(tail, head, 2, 100);
    print(head);

    InsertAtPosition(tail, head, 1, 190);
    print(head);

    InsertAtPosition(tail, head, 6, 320);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    return 0;
}

//****************Same things if our list is empty*******************
/*
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free " << val << endl;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAthead(Node *&tail, Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert at first position
    if (position == 1)
    {
        InsertAthead(tail, head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insering at last position
    if (temp->next == NULL)
    {

        InsertAtTail(tail, head, d);
        return;
    }

    // creating for any d between first and last

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
}
//**************Delete any node *************
void deleteNode(int position, Node *&head)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // deleting any middle or last element
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    // in case of empty link list
    Node *head = NULL;
    Node *tail = NULL;
    print(head);

    InsertAthead(tail, head, 11);
    print(head);

    InsertAthead(tail, head, 15);
    print(head);

    InsertAthead(tail, head, 19);
    print(head);

    InsertAtPosition(tail, head, 2, 100);
    print(head);

    InsertAtPosition(tail, head, 1, 190);
    print(head);

    InsertAtPosition(tail, head, 6, 320);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    deleteNode(6, head);
    print(head);
    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    // deleteNode(3,head);
    // print(head);
    // cout << "Head " << head->data << endl;
    // cout << "Tail " << tail->data << endl;

    // deleteNode(3,head);
    // print(head);
    // cout << "Head " << head->data << endl;
    // cout << "Tail " << tail->data << endl;

    return 0;
}  */