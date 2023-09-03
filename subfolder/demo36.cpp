#include <iostream>
using namespace std;

//***************More about Protected***********

class Base
{
protected: // as 'a' is not as much sensitive as 'b' but still we want to it
    int a; // private and also want to execute then ie. inheriate with private we used protected
private:
    int b;
};
/*   This below is chart according to visibility of different members
for a protected member:
                      public derivation  private derivation  protected derivation
1.private members     Not inherited      Not inherited       Not inheriated
2.protected members   protected          private             protected
3.public members      public             private             protected
*/
class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<b.a;  // we cant do this directly becz "a" ie. protected works as private here

    return 0;
}