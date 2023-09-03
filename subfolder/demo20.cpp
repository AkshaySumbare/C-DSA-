#include <iostream>
using namespace std;

//************Statics members**********

class employee
{
    int id;
    // static // if we doesnt write static in this code code run but employee no show 1 not increase with id
    static int count; // =0; //if we write static no need of write =0

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};

int employee ::count; //=1000 we add this no will start from 1001; // if we not write int employee here code not execute both needed for static and this
int main()
{
    employee Akshay, Rahul, Raman;

    Akshay.setData();
    Akshay.getData();

    Rahul.setData();
    Rahul.getData();

    Raman.setData();
    Raman.getData();
    return 0;
}