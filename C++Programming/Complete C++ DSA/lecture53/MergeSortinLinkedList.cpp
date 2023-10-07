#include <iostream>
using namespace std;

// merge Sort in Link List
//  eg. 3--->5--->1--->2--->9
//  output should be == 1-->2--->3-->5-->9 without changing the data

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

// Finding Mid
Node *findMid(Node *head)
{
   Node *slow = head;
   Node *fast = head->next;

   while (fast != NULL && fast->next != NULL)
   {
      slow = slow->next;
      fast = fast->next->next;
   }
   return slow;
}

Node *merge(Node *left, Node *right)
{
   if (left == NULL)
   {
      return right;
   }
   if (right == NULL)
   {
      return left;
   }

   Node *ans = new Node(-1);
   Node *temp = ans;

   // merge two sorted Link list
   while (left != NULL && right != NULL)
   {
      if (left->data < right->data)
      {
         temp->next = left;
         temp = left;
         left = left->next;
      }
      else
      {
         temp->next = right;
         temp = right;
         right = right->next;
      }
   }

   while (left != NULL)
   {

      temp->next = left;
      temp = left;
      left = left->next;
   }

   while (right != NULL)
   {
      temp->next = right;
      temp = right;
      right = right->next;
   }
   ans = ans->next;
   return ans;
}
Node *mergeSort(Node *head)
{
   // base case
   if (head == NULL || head->next == NULL)
   {
      return head;
   }

   // break link list into two half after finding the mid
   Node *mid = findMid(head);

   Node *left = head;
   Node *right = mid->next;
   mid->next = NULL;

   // recursive Call to sort both half
   left = mergeSort(left);
   right = mergeSort(right);

   // merge both left and right half
   Node *result = merge(left, right);

   return result;
}
int main()
{

   Node *head = new Node(8);
   // Node *head = new Node(5);

   InsertAtHead(head, 4);
   InsertAtHead(head, 62);
   InsertAtHead(head, 93);
   InsertAtHead(head, 26);
   InsertAtHead(head, -3);
   InsertAtHead(head, 0);
   InsertAtHead(head, -4);

   cout << "Before sorting : ";
   print(head);

   head = mergeSort(head);

   cout << "After sorting : ";
   mergeSort(head);
   print(head);

   return 0;
}
