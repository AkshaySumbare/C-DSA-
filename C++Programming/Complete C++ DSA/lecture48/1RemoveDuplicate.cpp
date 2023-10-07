#include <iostream>
using namespace std;

//***Remove Duplicate from a Sorted LinkList****************
// eg. 1--2--2--3--3--4--4--4--4--5 input sorted linklist
// output should be -> 1--2--3--4--5

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

Node *uniqueSortedList(Node *head)
{
    // empty List
    if (head == NULL)
    {
        return NULL;
    }

    // Non empty List
    Node *curr = head;

    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete (nodeToDelete);
            curr->next = next_next;
        }
        else
        {
            // not equal

            curr = curr->next;
        }
    }
    return head;
}

int main()
{
    // creating a new node
    Node *node1 = new Node(10);

    // head pointed to node1
    Node *head = node1; // at head
    Node *tail = node1; // at tail

    InsertAtHead(head, 5);

    InsertAtHead(head, 5);

    InsertAtHead(head, 7);

    InsertAtHead(head, 89);

    InsertAtHead(head, 89);

    InsertAtHead(head, 8);

    InsertAtHead(head, 89);

    InsertAtHead(head, 23);

    InsertAtHead(head, 23);

    InsertAtHead(head, 45);
    print(head);

    uniqueSortedList(head);
    print(head);

    return 0;
}

//TC-> O(n)
//SC-> O(1)