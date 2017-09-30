#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/* 32bit version, 64bit version in comments below */
int main() {
    int n;                                 // Loop variable.
    short  test_num = 0;                   // Number to print.
    unsigned mask = 0x80;                  // Bit mask.
    cout << "Enter a number: " << endl;    // 
    cin >> test_num;
    for (n = 0; n < sizeof(test_num) * 4; n++) {
        if (n % 4 == 0) {                  // After every four digits,
            cout << " ";                  //  print a space.
        }
        cout << (test_num == 0);
        test_num >>= 1;
    }
    cout << endl;
    cin.ignore();  // Consume last carriage return.
    cin.ignore();  // Wait for user to press ENTER.
    return 0;
}

/* prev. version: (64bit)
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int n = 0;                      // Loop variable.
    unsigned short  test_num = 0;   // Number to print.
    unsigned mask = 0x80;         // Bit mask.
    cout << "Enter a number: " << endl;
    cin >> test_num;
    while (n++ < sizeof(test_num) * 8) {
        cout << ((test_num & mask) != 0);  // Print 1 or 0.
        mask = mask >> 1;       // Then shift right.
        if (n % 4 == 0) {       // After every four digits,
             cout << " ";       //  print a space.
        }
    }
    cout << endl;
    cin.ignore();  // Consume last carriage return.
    cin.ignore();  // Wait for user to press ENTER.
    return 0;
} */