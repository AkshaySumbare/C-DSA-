#include <iostream>
using namespace std;

// 1) Encapsulation :wrapping up Data member and function // Enscapusalation meaning like Information Hiding / Data Hiding
    //Encapsulation, to put it simply, is the process of preventing users from having direct access to all of
    // an object 's variables' state values by limiting parts of an object's components. It deals with disguising 
    //the complexity of the programme. Encapsulation in C++ refers to the grouping of related data and functions
    // into a single entity referred to as a class. We shield the data from change by encapsulating these functions
    // and data. Information or data concealing is another name for this idea. Containers in coding are an example
    // of encapsulation since they combine data and methods into a single package.
    //fully encapsulated Class -> all Data Member are private
    /*
    Encapsulation may also refer to a mechanism of restricting the direct access to some components of an object,
     such that users cannot access state values for all of the variables of a particular object. Encapsulation can
      be used to hide both data members and data functions or methods associated with an instantiated class or 
      object.*/
    // Advantages of Encapsulation -> why we use ?
    //  Ans->1) Advantage is to hiding our data
    // increase the security
    //  if we want ,we can make class read only
    //  code Reusability
    //  helps to unit Testing

    class Student
{
private:
    // Data members
    string name;
    int age;
    int height;

public:
    // function
    int getAge()
    {
        return this->age;
    }
};
int main()
{

    Student first;
    cout << "All is well " << endl;

    return 0;
}