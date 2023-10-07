#include <iostream>
//#include <map>
using namespace std;

// in this type of question 3 tyoes of questions woulde be asked
// 1) Detect cycle in LinkList
// 2) Remove Cycle from Link List
// 3) Begining Nodes of Loop in Link list
//  eg. 1--2--3--4--5
//               |  |
//               7--6
// starting Node odf cycle 4 etc.
//

/*
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

bool isCircularList(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }

    return false;
}

bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    // creating a map
    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        // Cycle is present
        if (visited[temp] == true)
        {
            return true;
        }
        else
        {
            visited[temp] = true;
            temp = temp->next;
        }
    }
    //No cycle is present  
    return false;
}
  */
int main()
{

   /*  Node *tail = NULL;

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

    if (isCircularList(tail))
    {
        cout << "It is Circular " << endl;
    }
    else
    {
        cout << "It is Not Circular " << endl;
    }  */

    

    return 0;
}