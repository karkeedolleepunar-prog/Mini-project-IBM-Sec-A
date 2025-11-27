#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    int arr[100];

    cout << "Enter exercise times: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reversed Order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
