#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main() {
    int lower, upper;

    cout << "Enter the first boundary of the range: ";
    cin >> lower;
    cout << "Enter the second boundary of the range: ";
    cin >> upper;

    if (lower > upper) {
        swap(lower, upper);
    }

    cout << "\nAll numbers in the range [" << lower << ", " << upper << "]:" << endl;
    for (int i = lower; i <= upper; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "\nEven numbers in the range:" << endl;
    for (int i = lower; i <= upper; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "\nOdd numbers in the range:" << endl;
    for (int i = lower; i <= upper; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "\nNumbers divisible by 7 in the range:" << endl;
    for (int i = lower; i <= upper; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
