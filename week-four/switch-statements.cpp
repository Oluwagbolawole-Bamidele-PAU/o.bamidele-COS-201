#include <functional>
#include <iostream>
using namespace std;

int main() {
    /*int day;
    cout << "Enter the day ===> ";
    cin >> day;

    if (day == 1) {
        cout << "weekday";
    }
    else if ( day == 2) {
        cout <<"weekday";
    }
    else if ( day == 3) {
        cout <<"weekday";
    }
    else if ( day == 4) {
        cout <<"weekday";
    }
    else if ( day == 5) {
        cout <<"weekday";
    }
    else if ( day == 0) {
        cout <<"weekend";
    }
    else if ( day == 6) {
        cout <<"weekend";
    }
    else {
        cout << "not a day";
    }*/
    // A case using switch stements, and how we can use it in place of multiple if and else if statments
    int day;
    cout << "Enter the day ===> ";
    cin >> day;

    switch (day) {
        // In 'fall out' behaviour is simply concering the lack of a 'break ;'
        // command where it runs down all the cases until it finds a break and ends.
        case 1:
            cout<<"weekday";
            break;
        case 2:
            cout<<"weekday";
            break;
        case 3:
            cout<<"weekday";
            break;
        case 4:
            cout<<"weekday";
            break;
        case 5:
            cout<<"weekday";
            break;
        case 6:
            cout<<"weekend";
            break;
        case 7:
            cout<<"weekend";
            break;
    }

}