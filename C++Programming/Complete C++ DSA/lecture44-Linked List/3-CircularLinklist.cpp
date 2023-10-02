#include <iostream>
using namespace std;


//*******************************Circular Link list******************
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // assuming that the element is present in the list

    // for empty list
    if (tail == NULL)
    {
        Node *NewNode = new Node(d);
        tail = NewNode;
        NewNode->next = NewNode;
    }
    else
    {
        // list is non-empty
        Node *curr = tail; // creating a curr name pointer and pi=ut into the tail
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element is found
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *tail)
{
    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    else
    {
        // Non Empty
        // assumming that value is present
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // when there is only one link list

        if (curr == prev)
        {
            tail = prev;
        }
        //>=2 Node in any list
        if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *tail = NULL;

    // empty list insert
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 6);
    print(tail);
    insertNode(tail, 6, 2);
    print(tail);
    insertNode(tail, 2, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 5, 8);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
}
