#include <iostream>
using namespace std;

//*************************Merge 2 sorted Linked List**********************
// eg. i/p1 Link list-->  1    2    5
//                                           output--> 1   2   3  4  5
//    i/p2 Link list-->  2    3    5

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

Node *solve(Node *first, Node *second)
{

    // if only one element is present in first list
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }

    Node *curr1 = first;
    Node *next1 = curr1->next;
    Node *curr2 = second;
    Node *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {
            // add node in between the first list
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            // update pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // curr1 and next1 ko aage baana padega
            curr1 = next1; // or curr1->next both are same
            next1 = next1->next;

            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node *sortTwoList(Node *first, Node *second)
{
    // in case of first linked list is null
    if (first == NULL)
    {
        return second;
    }
    // in case of second is null
    if (second == NULL)
    {
        return first;
    }

    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}

int main()
{

    Node *head1 = new Node(1);
    Node *tail1 = head1;

    InsertAtTail(tail1, 1);
    InsertAtTail(tail1, 3);
    InsertAtTail(tail1, 5);
    InsertAtTail(tail1, 7);
    InsertAtTail(tail1, 9);

    Node *head2 = new Node(0);
    Node *tail2 = head2;

    InsertAtTail(tail2, 2);
    InsertAtTail(tail2, 3);
    InsertAtTail(tail2, 4);
    InsertAtTail(tail2, 7);
    InsertAtTail(tail2, 8);

    cout << "First List: ";
    print(head1);

    cout << "Second List: ";
    print(head2);

    Node *answer = NULL;

    if (head1->data < head2->data)
    {
        answer = sortTwoList(head1, head2);
    }
    else
    {
        answer = sortTwoList(head2, head1);
    }

    cout << "Sorted List : ";
    print(answer);

    return 0;
}