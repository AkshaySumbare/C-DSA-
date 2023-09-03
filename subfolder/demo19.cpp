#include <iostream>
using namespace std;

class shop
{
    int itemId[105];
    int itemPrice[105];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void shop ::setPrice(void)
{
    cout << "Enter id of your iteam  no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your iteam no " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of iteam with id  " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}