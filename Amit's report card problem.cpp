//Amit's report card analyzer 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;

    int marks, highest, lowest;

    cout << "Enter marks of " << n << " subjects: ";
    cin >> marks;

    highest = marks;
    lowest = marks;

    for (int i = 1; i < n; i++) {
        cin >> marks;

        if (marks > highest)
            highest = marks;

        if (marks < lowest)
            lowest = marks;
    }

    cout << "Highest = " << highest << endl;

    cout << "Lowest = " << lowest << endl;

    return 0;
}
