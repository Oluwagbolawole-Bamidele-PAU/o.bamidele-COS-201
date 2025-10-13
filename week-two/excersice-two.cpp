#include <iostream>
using namespace std;

/* Write a program that reads in two numbers: an account balance and an annal interest rate
 * expressed as a percentage. Your program should then display the new balance after a year. There
 * are no deposits or withdraws-just the interest payment.*/

int main() {
    cout << "Welcome ! \n";
    cout << "please, input the following fields \n";

    //Starting Balance
    float srt_balance;
    cout << "Kindly insert your Starting Balance:" << endl;
    cin >> srt_balance;
    cout << "Starting Balance:" << srt_balance << endl;

    //Annual Interest rate
    float anl_interest;
    cout << "Kindly insrt your Annual Interest Rate:" << endl;
    cin >> anl_interest;
    cout << "Annual Interest Rate:" << anl_interest << endl;

    //year
    float year;
    cout << "Kindly insert your year:" << endl;
    cin >> year;
    cout << "year :" << anl_interest << endl;

    //Balance after one year
    float interest;
    interest = anl_interest + srt_balance + year;
    float new_balance = srt_balance + interest;
    cout << "New Balance after a" << year << "year(s):" << new_balance << endl;

    return 0;
}