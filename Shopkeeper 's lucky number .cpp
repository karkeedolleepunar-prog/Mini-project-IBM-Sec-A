#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter your lucky number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Even Number" << endl;
    } else {
       cout << "Odd Number" << endl;
    }

    
    if (num % 5 == 0) {
        cout << "Divisible by 5" << endl;
    } else {
        cout << "Not Divisible by 5" << endl;
    }

    return 0;
}
