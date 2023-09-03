#include <iostream>
using namespace std;

//*********Array of any objects**********//

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 120;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    // employee Akshay, Rahul, raman, Lalu;
    // Akshay.setid();
    // Akshay.getid();

    employee fb[6];
    for (int i = 0; i < 6; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}
 