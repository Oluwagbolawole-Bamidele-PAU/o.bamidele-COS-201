#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "What is your year ===> ";
    cin >> year;
    int year_digits = 4;

    switch (year % 12) {
        case 0: cout << "Your year is the year of the MONKEY";
            break;
        case 1: cout << "Your year is the year of the ROOSTER";
            break;
        case 2: cout << "Your year is the year of the DOG";
            break;
        case 3: cout << "Your year is the year of the PIG";
            break;
        case 4: cout << "Your year is the year of the RAT";
            break;
        case 5: cout << "Your year is the year of the OX";
            break;
        case 6: cout << "Your year is the year of the TIGER";
            break;
        case 7: cout << "Your year is the year of the RABBIT";
            break;
        case 8: cout << "Your year is the year of the DRAGON";
            break;
        case 9: cout << "Your year is the year of the SNAKE";
            break;
        case 10: cout << "Your year is the year of the HORSE";
            break;
        case 11: cout << "Your year is the year of the SHEEP";
            break;
    }
}
