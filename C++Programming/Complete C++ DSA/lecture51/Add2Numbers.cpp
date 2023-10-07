
#include <iostream>
using namespace std;

// Add two number represented by linked list

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

// Function of Reverse the link list
Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void *insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val);
    // empty list case
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return NULL;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *add(Node *first, Node *second)
{
    int carry = 0;

    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;

        // create node and add in answer Linked List
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
        first = first->next;
        second = second->next;
    }
    // when there case where one of the first and second list whose distance is small te. 1-->2--> 3-->4-->X
    //                                                                                    3-->4-->4--> X

    // first linklist is not NULL ie. extra element then second one
    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;
        // create node and add in answer Linked List
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        first = first->next;
    }

    // Second linked list is not NULL ie. more length than first one
    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;
        // create node and add in answer Linked List
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        second = second->next;
    }
    // in case of both list are same length but carry is remained
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        // create node and add in answer Linked List
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
    }
    return ansHead;
}

Node *AddLinkList(Node *first, Node *second)
{
    // step1 --> Reverse the link list
    first = reverse(first);
    second = reverse(second);

    // step-->add 2 Link list
    Node *ans = add(first, second);

    // step3
    ans = reverse(ans);

    return ans;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    InsertAtHead(head1, 4);
    InsertAtHead(head1, 3);

    InsertAtHead(head2, 1);
    InsertAtHead(head2, 3);
    InsertAtHead(head2, 2);

    Node *sum = AddLinkList(head1, head2);

    cout << "List 1--> ";
    print(head1);
    cout << "List 2 --> ";
    print(head2);
    cout << "Sum --> ";
    print(sum);
    return 0;
}
