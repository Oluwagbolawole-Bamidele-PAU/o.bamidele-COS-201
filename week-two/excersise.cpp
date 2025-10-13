#include <cmath>
#include <iostream>

using namespace std;

/* Write a c++ program that prints th hypotenuse of a right-angle triangle.
 * Ask the user to enter the length of the other two sides of the triangle.
 * Hint: Use Pythogoras theorem*/

int main() {
    //h^2 = s1^2 + s2^2

    //side one
    cout << "Please input side one: " << endl;
    float side_one;
    cin >> side_one;
    cout << "Your input for side one is " << side_one << endl;

    //side two
    cout << "Please input side two: " << endl;
    float side_two;
    cin >> side_two;
    cout << "Your input for side two is " << side_two << endl;

    //calculating the hypotenuse
    float hypotenuse = pow(side_one, 2) + pow(side_two, 2);
    float answer = sqrt(hypotenuse);

    cout << "The Hyptenuse or your question is: " << answer << endl;
    return 0;


}