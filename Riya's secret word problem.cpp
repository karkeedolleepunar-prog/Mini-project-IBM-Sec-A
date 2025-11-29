//Riya's secret word problem 
#include <iostream>
using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    bool isPalindrome = true;

    int start = 0;
    int end = word.length() - 1;

    while (start < end) {
        if (word[start] != word[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "Perfect Secret Word" << endl;
    else
        cout << "Not a Secret Word" << endl;

    return 0;
}
