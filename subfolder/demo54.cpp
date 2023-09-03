#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 //********** File I/O by using Member function open************
 
int main()
{
     ofstream out;
     out.open("demo53a.txt");
     out<<"this is Akshay sumbare "<<endl;
    // File reading
    ifstream Ain;
    string content;
    Ain.open("demo53b.txt");


    while (Ain.eof() == 0)
    {
        getline(Ain, content);
        cout << content << endl;
    }

    Ain.close();
    return 0;
}