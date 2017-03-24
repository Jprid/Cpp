//float sum calc

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    double sum = 0.0;
    double x = 1.0;
    cout << "enter a list of floats (doubles), separated by spaces. terminate ";
    cout << "the string with a non-digit input" << endl;
    while(x != 0){
        cin >> x;
        if (!cin)
            x = 0.0;
        sum = sum + x;
    }
    cout << "the sum total is: " << sum << endl;
    cout << "enter return to quit";
    cin.ignore();
    cin.ignore();
    return 0;
}