#include <iostream>
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

Node *getMid(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}
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

bool isPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    // step 1 -> find Middle
    Node *middle = getMid(head);

    // step 2 ->reverse list after Middle
    Node *temp = middle->next;
    middle->next = reverse(temp);

    // step-3 Compare two halve
    Node *head1 = head;
    Node *head2 = middle->next;

    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    // step 4 - report step 2
    temp = middle->next;
    middle->next = reverse(temp);

    return true;
}

int main()
{
    Node *head = NULL;

    InsertAtHead(head, 54);
    InsertAtHead(head, 67);
    InsertAtHead(head, 34);
    InsertAtHead(head, 99);
    InsertAtHead(head, 34);
    InsertAtHead(head, 67);
    InsertAtHead(head, 54);

    print(head);

    if (isPalindrome(head))
    {
        cout << "List is palindrome" << endl;
    }
    else
    {
        cout << "List is not palindrome" << endl;
    }
    return 0;
}

// Time Complexity --> O(N)
//  Space Complexity -->O(1)
