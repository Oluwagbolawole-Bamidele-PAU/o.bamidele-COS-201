#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string name;
    bool isPauStudent;
    int course;
    int location;

    cout<<"Enter Full Name ===>";
    getline(cin, name);

    cout << "Is PAU Student? (1 for True or 0 for False) ===> ";
    int flag;
    cin >> flag;
    isPauStudent = (flag != 0);

    cout << "Enter course (1-5)" << "1. Photography\n"
         << "\t2. Painting\n" << "\t3. Fishing Farming"
         << "\t4. Baking\n" << "\t5. Public Speaking\n" << "Enter here ===> ";
    cin >> course;

    cout << "Enter location ( 1-5) \n"<< "\t1. Camp House A\n"
         << "\t2. Camp House B\n" << "\t3. Camp House C\n"
         << "\t4. Camp House D\n" << "\t5. Camp House E\n"  << "Enter her ===> ";
    cin >> location;

    //2. Map chioces
    string courseName;
    int days = 0;
    double regFee = 0.0;

    if ( course == 1) {
        courseName = "Photogaphy";
        days = 3;
        regFee = 10000.0;
    }
    else if (course == 3) {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000.0;
    }
    else if (course == 4) {
        courseName = "Baking";
        days = 5;
        regFee = 13000.0;
    }
    else if (course == 5) {
        courseName = "Public Speaking";
        days = 2;
        regFee = 5000.0;
    }
    else {
        cout << "Invalid course selection.\n";
        return 0;
    }
    //2b. Mapping Locatation
    string locName;
    double lodgingPerDay = 0.0;

    if (location == 1) {
        locName = "Camp House A";
        lodgingPerDay = 10000.0;
    }
    else if (location ==2) {
        locName = "Camp House B";
        lodgingPerDay = 2500.0;
    }
    else if (location ==3) {
        locName = "Camp House C";
        lodgingPerDay = 5000.0;
    }
    else if (location ==4) {
        locName = "Camp House D";
        lodgingPerDay = 13000.0;
    }
    else if (location ==5) {
        locName = "Camp House E";
        lodgingPerDay = 5000.0;
    }
    else {
        cout << "Invalid Location selection\n";
        return 0;
    }

    //Computing Base Cost
    double lodgingCost = lodgingPerDay + days;
    double total= regFee + lodgingCost;

    //4a. Decision rules
    double lodgingDiscount = 0.0;
    double regDiscount = 0.0;

    if (isPauStudent && (location == 1 || location ==2 )) {
        lodgingDiscount = 0.05 * lodgingCost;
    }

    if ((days > 5 )|| (regFee > 12000) ) {
        regDiscount = 0.03 * regFee;
    }

    double lodgingAfter = lodgingCost - lodgingDiscount;
    double regFeeAfter = regFee - regDiscount;

    //5. Random Promo
    srand(time(0));
    int r = rand()%100+1;
    double promo = 0.0;
    if (r == 7 || r == 77) {
        promo = 500;
    }
    //Output view
    cout << "Name: " << name <<"\n";
    cout << "PAU Student: " << (isPauStudent ? "YES" : "NO") << "\n";
    //Ternary Operation: [condition ? expression_if_true : expression_if_false;].
    cout << "Course Name: " << courseName << "\n";
    cout << "Location: " << location << "\n";
    cout << "Number of Days: " << days << "\n";
    cout << "Reg Fee: " << regFee << "\n";
    cout << "Reg Fee After Discount: " << regFeeAfter << "\n";
    cout << "Location Name: " << locName << "\n";
    cout << "Lodging Per Day: " << lodgingPerDay << "\n";
    cout << "Total Lodging Cost: " << lodgingCost << "\n";
    cout << "Total lodging After Discount: " << "\n";
    cout << "Promo Dode; " << r << "\n";
    cout << "===================";
    cout << "Total cost"<< total<<"\n";

    return 0;

}
