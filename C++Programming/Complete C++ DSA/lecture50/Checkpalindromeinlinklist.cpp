#include <iostream>
#include <vector>
using namespace std;

// Check palindrome in a linklist

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

bool isPalindrome(Node *head)
{
    Node *temp = head;
    vector<int> newList;

    while (temp != NULL)
    {
        newList.push_back(temp->data);
        temp = temp->next;
    }

    int start = 0;
    int end = newList.size() - 1;

    while (start < end)
    {
        if (newList[start] != newList[end])
        {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main()
{
    Node *head = NULL;

    InsertAtHead(head, 54);
    InsertAtHead(head, 67);
    InsertAtHead(head, 4);
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
// Time complexity->O(n)
// Space Complexity-> O(n)
