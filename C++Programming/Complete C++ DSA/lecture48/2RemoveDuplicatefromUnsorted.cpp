#include <iostream>
#include <map>
using namespace std;

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

// void removeNodes1(Node* &head) {
//     //Empty link list
//     if(head == NULL) {
//         return;
//     }

//     Node* curr = head;
//     while(curr->next != NULL) {
//         Node* prev = curr;
//         Node* temp = curr->next;

//        // this loop in loop indicate that the when compare all above values for curr
//         while(temp != NULL) {
//             if(curr->data == temp->data) {
//                 Node* target = temp;
//                 temp = temp->next;
//                 prev->next = temp;
//                 delete target;
//             } else {
//                 prev = temp;
//                 temp = temp->next;
//             }
//         }

//         curr = curr->next;
//     }
// }

//***************Second Approach*****************

void removeNodes2(Node *&head)
{
    // in case of empty list
    if (head == NULL)
    {
        return;
    }

    map<int, bool> visited;
    Node *temp = head;
    visited[temp->data] = true;

    while (temp->next != NULL)
    {
        if (visited[temp->next->data] == true)
        {
            Node *target = temp->next;
            temp->next = target->next;
            delete target;
        }
        else
        {
            visited[temp->next->data] = true;
            temp = temp->next;
        }
    }
}

int main()
{
    // creating a new node
    Node *node1 = new Node(10);

    // head pointed to node1
    Node *head = node1; // at head
    Node *tail = node1; // at tail

    InsertAtTail(tail, 5);
    InsertAtTail(tail, 43);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 5);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 78);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 5);
    InsertAtTail(tail, 5);
    InsertAtTail(tail, 43);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 89);
    InsertAtTail(tail, 5);
    InsertAtTail(tail, 2);
    print(head);

    removeNodes2(head);
    print(head);

    return 0;
}
