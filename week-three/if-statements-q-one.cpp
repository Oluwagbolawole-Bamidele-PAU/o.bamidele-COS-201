#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    // int integer;
    // cin >> integer;
    //
    // if (integer % 5 == 0) {
    //     cout << "Hi five";
    // }
    // if (integer % 2 == 0) {
    //     cout << "Hi even" << endl;
    // }

    // //Second Question
    // /*Write a program in C++*/
    // srand(time(0));
    // cout << rand() % 10;

    //Generating Random Numbers: An algorithmic example + Class work
    int number_one = rand() % 10;
    int number_two = rand() % 10;

    if (number_one < number_two) {
        swap(number_one, number_two);
    }
    cout << "What is number one -  number two " << endl;
    int guess_ans;
    cin >> guess_ans;
    int answer_correct = number_one - number_two;
    if (answer_correct == guess_ans) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Not correct!" << endl;
    }
    return 0;
}