// #include<iostream>
// #include<array>
// using namespace std;

// //*****************STL in C++**************
// STL ->Standard template library

// int main(){
//     int basic[3] ={1,2,3};

//     //array<Datatype,SizeofanArray> NameofanArray={1,2,3,4};  //when we add an library of array we used this type of synatx to defin array

//     array<int,4> a={1,2,3,4};
//     int size=a.size();
//     for (int i = 0; i <size; i++)
//     {
//         cout<<a[i]<<endl;
//     }

//     cout<<"Enter at 2nd index "<<a.at(2)<<endl;
//     cout<<"Empty or not "<<a.empty()<<endl;
//     cout<<"first element "<<a.front()<<endl;
//     cout<<"last element "<<a.back()<<endl;

//     return 0;
// }

//*************Vectors in C++**********
// vector is a dynamic array :means whenever our vector is full it automaticaly double the size of vector. eg.
// we create 4 size vector after we filled 5 array vector double the size from 4 to 8 and copy all the old values in
// new vector and make old vector dum .we can also reduce the size of a vector

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {

//   vector<int> v;
//   cout << "Capacity->" << v.capacity() << endl;

//   v.push_back(1);
//   cout << "Capacity->" << v.capacity() << endl;

//   v.push_back(2);
//   cout << "Capacity->" << v.capacity() << endl;

//   v.push_back(3);
//   cout << "Capacity->" << v.capacity() << endl;
//   cout << "Size->" << v.size() << endl;

//   cout << "Element at 2nd index " << v.at(2) << endl;

//   cout << "Front " << v.front() << endl;
//   cout << "back " << v.back() << endl;

//   cout << "Before pop" << endl;
//   for (int i : v)
//   {
//     cout << i << " ";
//   }
//   cout << endl;

//   v.pop_back();
//   cout << "After the pop" << endl;
//   for (int i : v)
//   {
//     cout << i << " ";
//   }

//   // clearing the vector
//   cout << "Before clear size " << v.size() << endl;

//   v.clear();
//   cout << "After clear the size " << v.size() << endl;

//   return 0;
// }

//*************List in C++**********

// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//   list<int> l;

//   l.push_back(1);
//   l.push_front(2);

//   for (int i : l)
//   {
//     cout << i << " ";
//   }

//   cout << endl;
//   l.erase(l.begin());
//   cout << "after the erase " << endl;
//   for (int i : l)
//   {
//     cout << i << " ";
//   }

//   list<int> n(5, 100);
//   cout << "Printing n" << endl;
//   for (int i : n ){
//          cout << i << " ";
//        }
//     return 0;
// }

//********Stack in C++**********

// #include <iostream>
// #include <stack>
// using namespace std;
// // stack work on the principle of 'last in first out concept'

// int main()
// {
//   stack<string> s;
//   s.push("love");
//   s.push("babbar");
//   s.push("kumar");

//   cout << "Top Element->" << s.top() << endl;

//   s.pop();
//   cout << "Top Element->" << s.top() << endl;

//   stack<int> i;
//   i.push(1);
//   i.push(2);
//   i.push(3);

//   cout << "Top Element->" << i.top() << endl;

//   i.pop();
//   cout << "Top Element->" << i.top() << endl;

//   return 0;
// }

//***********Queue************
// work on the principle of first in first out
// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {

//   queue<string> q;
//   q.push("Love");
//   q.push("Babbar");
//   q.push("Kumar");

//   cout << "Top Eement: " << q.front() << endl;
//   q.pop();
//   cout << "Top element: " << q.front() << endl;

//******Maxi and Mini in queue********
// max heap
//   priority_queue<int> maxi;

// mix-heap
//   priority_queue<int, vector<int>, greater<int>> mini;

//   maxi.push(1);
//   maxi.push(5);
//   maxi.push(2);
//   maxi.push(0);
//   cout << "Size->" << maxi.size() << endl;
//   int n = maxi.size();
//   for (int i = 0; i < n; i++)
//   {
//     cout << maxi.top() << " ";
//     maxi.pop();
//   }
//   cout << endl;

// for mini in
//   mini.push(1);
//   mini.push(5);
//   mini.push(2);
//   mini.push(0);

//   int m = mini.size();
//   for (int i = 0; i < m; i++)
//   {
//     cout << mini.top() << " ";
//     mini.pop();
//   }
//   cout << endl;

//   return 0;
// }

//**********Set in C++********
// Stores only unique element eg.if we store 5 4 time it shows only one time
// print in sorted array

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {

  // set<int>s;

  // s.insert(5);
  // s.insert(1);
  // s.insert(6);
  // s.insert(0);

  // for (auto i : s)
  // {
  //   cout<<i<<endl;
  // }

//   set<int> s;

//   s.insert(5);
//   s.insert(5);
//   s.insert(5);
//   s.insert(6);
//   s.insert(6);
//   s.insert(0);
//   s.insert(0);
//   s.insert(0);

//   for (auto i : s)
//   {
//     cout << i << endl;
//   }

//   return 0;
// }

//***********Map in C++********
// samekey not point two values 
// two keys poi nts same keys 

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
  
//   map<int, string> m;

//   m[1]="Akshay";
//   m[13]="Sumbare";  //here 2 is key while Sumbare is value 
//   m[2]="kumar";
  
//   //another way
//   m.insert({5,"bheem"});

//   for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;
//   }
//   return 0;
// }