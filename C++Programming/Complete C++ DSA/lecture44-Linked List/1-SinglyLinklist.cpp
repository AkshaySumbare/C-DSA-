
#include <iostream>
using namespace std;

//******************Linked List******************
// It is a type of Linear Data Structure made by collection of nodes
// nodes contain Data and The adress of next node adress
// why Linklist needed -->
// it is a Dynamic datastructure
// Types of linklist--> 1) Singly list, Doubly Linklist, circular Linklist, Circular doubly Link list

// 1)***********************Singly Link List**********************
//       1Node            2Node          3Node         ......
// eg. |5|adressof2|   |10|adressof3|  |12|adressof4|  ...........

// Inserction

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

//**************Delete any node *************
void deleteNode(int position, Node *&head)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
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
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // creating a new node
    Node *node1 = new Node(10);

    // head pointed to node1
    Node *head = node1; // at head
    Node *tail = node1; // at tail
    print(head);
    // insert element at starting/Head position
    //  InsertAtHead(head, 12);
    //  print(head);

    // InsertAtHead(head, 15);
    // print(head);

    // insert element at ending/Tail position
    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtanyPosition(tail, head, 3, 22); // 22 insert in between of 12 and 15
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(4, head);
    print(head);

    return 0;
}
