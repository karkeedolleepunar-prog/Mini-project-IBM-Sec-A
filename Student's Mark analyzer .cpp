//Student's Mark Analyzer 
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int marks, total = 0;

    cout << "Enter the marks of " << n << " students: ";

    for (int i = 0; i < n; i++) {
        cin >> marks;
        total += marks;
    }

    float average = (float) total / n;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}
