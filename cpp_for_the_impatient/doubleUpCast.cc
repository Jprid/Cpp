// C++
// C++ for the impatient
// upcasting to larger data-type size
// doing reverse, i.e. int i = 0.0 is dangerous because
// cast to smaller size data-type could result in the loss of data

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << sizeof(0) << endl;
    double z = 0;
    cout << sizeof(z) << endl;
    int i = 0;
    cout << "i alone: " << sizeof(i) << endl;
    cout << "i + z: " << sizeof(i + z) << endl;
    cout << "i gets promoted to a double (because it's being added to a double)" << endl;
    cin.ignore();
    cin.ignore();
}