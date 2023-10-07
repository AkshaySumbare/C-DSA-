#include <bits/stdc++.h>
using namespace std;

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

int getLength(Node *tail)
{
    if (tail == NULL)
    {
        return 0;
    }

    int count = 1;
    Node *temp = tail->next;

    while (temp != tail)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

pair<Node *, Node *> splitList(Node *tail)
{
    Node *tail1 = tail;
    Node *tail2 = NULL;
    int len = (getLength(tail) + 1) / 2;

    Node *temp = tail;
    while (len > 1)
    {
        temp = temp->next;
        len--;
    }

    tail2 = temp->next;
    temp->next = tail;
    temp = tail2;

    while (temp->next != tail)
    {
        temp = temp->next;
    }

    temp->next = tail2;

    return {tail1, tail2};
}

int main()
{

    Node *tail = NULL;

    // empty list insert
    insertNode(tail, 5, 3);

    insertNode(tail, 3, 6);

    insertNode(tail, 6, 2);

    insertNode(tail, 2, 5);

    insertNode(tail, 5, 7);

    insertNode(tail, 5, 8);
    cout << "Circular list is:";
    print(tail);

    pair<Node *, Node *> solution;
    solution = splitList(tail);

    cout << "Head of firstsplitlink list is " << solution.first->data << endl;
    cout << "FirstSplit list is: ";
    print(solution.first);

    cout << "Head of second split link list is " << solution.second->data << endl;
    cout << "SecondSplit list is:";
    print(solution.second);

    return 0;
}
