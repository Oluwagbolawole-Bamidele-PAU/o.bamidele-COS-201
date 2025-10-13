#include <iostream>
using namespace std;


int main() {


    cout << "This is a C++ program that prints their:\n";
    cout << "i. Sum\n";
    cout << "ii. Differnce, and\n";
    cout << "iii. Product\n";

    //User input of the two digits, a and b
    //Integer 'a'
    cout << "Please input integer 'a':\n";
    int a;
    cin >> a;
    cout << "Integer a: " << a << "\n";

    //Integer 'b'
    cout << "Please input integer 'b':\n";
    int b;
    cin >> b;
    cout << "Integer b: " << b << "\n";

    // Sum, differnce and product Calculations
    int sum = a + b;
    int diff = a - b;
    int product = a * b;

    // Printing out the calcultions
    cout << "Integer a + b: " << a + b << "\n";
    cout << "Integer a - b: " << a - b << "\n";
    cout << "Integer a * b: " << a * b << "\n";

    return 0;
}
