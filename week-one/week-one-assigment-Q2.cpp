#include <iostream>
using namespace std;

int main() {
    cout << "This is a C++ program that swaps the value of two integers\n";
    //first integer "a"
    cout << "Please input the first integer 'a'\n";
    int a;
    cin >> a;
    cout << "Integer a: " << a << "\n";

    //second integer "b"
    cout << "Please input the second integer 'b'\n";
    int b;
    cin >> b;
    cout << "Integer b: " << b << "\n";

    //Original order
    cout << "Original order" << a <<" "<< b << "\n";

    //New order
    cout << "New order" << b << " " << a<< "\n";

}