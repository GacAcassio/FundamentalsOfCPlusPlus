#include <iostream>

using namespace std;

struct Product
{
    string name;
    float price;
    int quantity;
    
    void readitem()
    {
        //Fill the code here
        cout << "Enter the product Name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;
        
        if (price <= 0 || quantity <= 0)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            printitem();
        }
    }
    void printitem()
    {
        //Fill the code here
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        printf("Total Amount: %.2f\n", price * quantity);
    }
};

int main()
{
    //Fill the code here 
    struct Product p;
    p.readitem();
    return 0;
}
