//The Carpenter measurement problem 
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two plank lengths: ";
    cin >> a >> b;

    int gcd = 1;

    
    for (int i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    int lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
