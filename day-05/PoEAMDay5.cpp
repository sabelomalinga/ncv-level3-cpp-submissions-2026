#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product
{
private:
    string productName;
    double price;
    int quantity;

public:
    void setProduct(string name, double p, int q)
    {
        productName = name;
        price = p;
        quantity = q;
    }

    string getProductName()
    {
        return productName;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantity()
    {
        return quantity;
    }

    double calculateTotal()
    {
        return price * quantity;
    }
};

int main()
{
    Product product1, product2, product3;

    product1.setProduct("Bread", 18.50, 3);
    product2.setProduct("Milk", 22.00, 2);
    product3.setProduct("Eggs", 45.00, 1);

    cout << fixed << setprecision(2);

    cout << "----- GROCERY SHOP -----" << endl;

    cout << "\nProduct: " << product1.getProductName();
    cout << "\nPrice: R" << product1.getPrice();
    cout << "\nQuantity: " << product1.getQuantity();
    cout << "\nTotal: R" << product1.calculateTotal();

    cout << "\n\nProduct: " << product2.getProductName();
    cout << "\nPrice: R" << product2.getPrice();
    cout << "\nQuantity: " << product2.getQuantity();
    cout << "\nTotal: R" << product2.calculateTotal();

    cout << "\n\nProduct: " << product3.getProductName();
    cout << "\nPrice: R" << product3.getPrice();
    cout << "\nQuantity: " << product3.getQuantity();
    cout << "\nTotal: R" << product3.calculateTotal();

    double grandTotal;

    grandTotal = product1.calculateTotal()
               + product2.calculateTotal()
               + product3.calculateTotal();

    cout << "\n\nGrand Total: R" << grandTotal << endl;

    return 0;
}
