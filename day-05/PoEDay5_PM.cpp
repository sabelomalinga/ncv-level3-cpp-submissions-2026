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



void GetProductData(Product &product)
{
    string name;
    double price;
    int quantity;

    cout << "\nEnter product name: ";
    getline(cin, name);

    cout << "Enter product price: R";
    cin >> price;

    cout << "Enter product quantity: ";
    cin >> quantity;
    cin.ignore(1000, '\n');

    product.setProduct(name, price, quantity);
}



void DisplayProduct(Product product)
{
    cout << "\nProduct: " << product.getProductName();
    cout << "\nPrice: R" << product.getPrice();
    cout << "\nQuantity: " << product.getQuantity();
    cout << "\nTotal: R" << product.calculateTotal();
    cout << "\n";
}



void prodCompare(Product product1, Product product2)
{
    if (product1.getProductName()[0] ==
        product2.getProductName()[0])
    {
        cout << "\nThe two product names start "
             << "with the same character." << endl;
    }
    else
    {
        cout << "\nThe two product names do not start "
             << "with the same character." << endl;
    }
}

// MAIN FUNCTION

int main()
{
    Product product1, product2, product3;

    cout << fixed << setprecision(2);

    cout << "----- GROCERY SHOP -----" << endl;

    // Enter product information
    cout << "\nEnter details for Product 1";
    GetProductData(product1);

    cout << "\nEnter details for Product 2";
    GetProductData(product2);

    cout << "\nEnter details for Product 3";
    GetProductData(product3);

    // Display all product information
    cout << "\n----- PRODUCT DETAILS -----" << endl;

    DisplayProduct(product1);
    DisplayProduct(product2);
    DisplayProduct(product3);


    double grandTotal;

    grandTotal = product1.calculateTotal()
               + product2.calculateTotal()
               + product3.calculateTotal();

    cout << "\nGrand Total: R" << grandTotal << endl;

    // Compare two products
    cout << "\n----- PRODUCT COMPARISON -----";

    prodCompare(product1, product2);

    return 0;
}
