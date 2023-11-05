/*
Polymorphism: Poly means many and morphism means forms. Polymorphism means many forms.

Overloading: Overloading is a concept of using same symbol or operator or function name for different purpose.
*/
#include<iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a+b;
    }

    int add(int a, int b, int c) {
        return a+b+c;
    }

    float add(int a, float b) {
        return a+b;
    } 

    float add(float a, int b) {
        return a+b;
    }
};

int main() {
    Calculator c;

    cout << c.add(2, 3) << endl;
    cout << c.add(2, 3, 4) << endl;
    cout << c.add(2, 3.5f) << endl;
    cout << c.add(2.5f, 3) << endl;
    // printf("%.2f\n", c.add(2.5f, 3));

    return 0;
}
/*
Task:

Problem Statement: Create a C++ program to manage a simple online shopping cart system. The program should allow users to add and remove items from their shopping cart, calculate the total price of items in the cart, and apply discounts based on item quantities or coupon codes. Utilize method overloading to handle different discount scenarios and provide an efficient shopping experience for users.

For the online shopping cart system problem statement, you can define two classes: `Product` and `ShoppingCart`.

Here are the class definitions and their attributes:

1. `Product` class:

   Attributes:
   - `productId` (int): A unique identifier for each product.
   - `productName` (string): The name of the product.
   - `price` (double): The price of the product.
   - `quantityAvailable` (int): The available quantity of the product.

2. `ShoppingCart` class:

   Attributes:
   - `cartItems` (vector of Product objects): A collection of products in the shopping cart.
   - `couponCode` (string): A coupon code for applying discounts.
   - `discountPercentage` (double): The percentage discount to be applied based on the coupon code.
   - `discountQuantityThreshold` (int): The quantity threshold for applying quantity-based discounts.
   - `discountAmount` (double): The amount to be deducted as a discount.

These attributes will help you implement the online shopping cart system with methods for adding/removing items, calculating the total price, applying discounts, and managing the contents of the shopping cart. You can also add other methods for handling different aspects of the shopping cart system, such as checking out and processing payments.
*/