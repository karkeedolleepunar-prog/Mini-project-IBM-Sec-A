#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter number of days: ";
    cin >> m;

    int bill[n][m];

    cout << "Enter the daily bills for each student: "<<endl;

    for (int i = 0; i < n; i++) {
       cout << "Student " << i + 1 << " bills: ";
        for (int j = 0; j < m; j++) {
            cin >> bill[i][j];
        }
    }

    int studentTotal[n] = {0};
    int maxSpend = 0;

   
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += bill[i][j];
        }
        studentTotal[i] = sum;

        if (sum > maxSpend)
            maxSpend = sum;
    }

   
    int highestDay = 1;
    int highestCollection = 0;

    for (int j = 0; j < m; j++) {
        int daySum = 0;
        for
 (int i = 0; i < n; i++) {
            daySum += bill[i][j];
        }
        if (daySum > highestCollection) {
            highestCollection = daySum;
            highestDay = j + 1;
        }
    }

  cout << "Weekly Canteen Report"<<endl;
   
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " total: Rs" << studentTotal[i] << endl;
    }

    cout << "Highest collection on Day " << highestDay << endl;

    cout << "Highest spender: ";

    bool first = true;
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            if (!first) cout << " and ";
            cout << "Student " << i + 1;
            first = false;
        }
    }

    cout << endl;
    return 0;
}

