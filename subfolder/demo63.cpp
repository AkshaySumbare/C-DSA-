#include <iostream>
#include <vector>
using namespace std;

//********Actual coding with STL*******
//*******Vectors*******

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element, size;
    cout << " Enter The size of your vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector ";
        cin >> element;
        vec1.push_back(element);
    }

    vec1.pop_back(); // This are the someoperations we can do according to our will
                     // To know such all other operation we need to go on the website
                     // www.cppvector method on that there is cplus C++ refernce
                     // Used of insert method
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter,8, 399); // this will insert 399 in first starting in output if we
                            //                           we want to display it after first no write iter+1 in this way
    display(vec1);          // similarly if we want to insert no of copies of 399 write no we want
                            // after the thsis way "iter,n"

    return 0;
}