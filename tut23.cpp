#include <iostream>
using namespace std;

class shop
{
    int itemID[100];
    int itemPrice[100];
    int counter = 0;

public:
    void setPrice();
    void displayPrice();
};

void shop ::setPrice()
{
    cout << "Enter ID of your item no. " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price of your item no. " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dk;
    int n;
    cout << "Enter the number of items\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dk.setPrice();
    }
    dk.displayPrice();
    return 0;
}