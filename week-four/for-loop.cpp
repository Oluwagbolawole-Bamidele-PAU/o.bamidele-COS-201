#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i;
    int j;

    for (i =1; i<3; i++) {
        sum = sum + i;
        cout << "When i is " << i << "The sum is " << sum << endl;
        for (j =2; j<3; j++) {
            sum = sum + j;
            cout << "When j is " << j << "The sum is " << sum << endl;

        }
    }
    i + j;
}