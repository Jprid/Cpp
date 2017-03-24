//ch2 exercises C++ for the impatient

#include <iostream>
#include <typeinfo>
using std::cout;
// using std::cin;
using std::endl;

int main() {
     char c = 0;
     unsigned char e = 0;
     int si = 0;
     unsigned int ui = 0;
     double d = 0;
     float f1 = 0;
     float f2 = 0;
     d = ui = si = c;    // This avoids warning msg's.
     if (typeid(c + c) == typeid(int)) {
          cout << "type of (char + char) is int" << endl;
     }
     if (typeid(si + ui) == typeid(unsigned)) {
          cout << "type of (int + unsigned int) ";
          cout << "is unsigned" << endl;
     }
     if (typeid(si + d) == typeid(double)) {
        cout << "type of (int + double) is double" << endl;
     }

     if (typeid(f1 + f2) == typeid(float)){
         cout << "type of f1+f2 is float" << endl;
     }
     if (typeid(f1 * f2) == typeid(float)){
         cout << "type of f1*f2 is float" << endl;
     }
     
     if (typeid(e + si) == typeid(int)) {
         cout << "type of (unsigned) char + int == int";
     }
     else if (typeid(e + si) == typeid(unsigned)){
         cout << "type of unsigned char + int == unsigned";
     }
     std::cin.ignore();  // Wait for user to press ENTER.
     return 0;
}