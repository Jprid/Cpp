#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

//binIn Binary Input:
// int calcDec(unsigned long long int binary){
    
// }


// 1000 1000 1000
// dec. 2^3 + 2^7 + 2^11  = 2,184
// 1000 1000 1000 => 2,184

int main() {
    std::string input, fullInput;
    cout << "acceptable input: " << endl;
    cout << "1010 1010 || 1 0 1 0 1 0 1 0 || 10 10 10 10" << endl;
    cout << "begin input:" << endl;
    // cin >> input;
    char cIdx; 
    // string[] inputArr =  
    unsigned long long int decSum = 0;
    while ( (cin >> input) != 0) {
        // cout << "input: " << input << endl;
        // cin >> input;
        while( input[0] == ' '){
            cin >> input;
            cout << "input: " << input << endl;
        }
        if ((input.length() != 0) && (input[0] != 'q'))
            fullInput.append(input);
        if (input[0] == 'q')
            break;
    }
    int adjLength = input.length() + (input.length() % 8);
    for(int i = 0; i < fullInput.length(); i++) {
        if(fullInput[i] == '1') { 
            double powVal = pow(2.0, fullInput.length() - i - 1); 
            decSum += powVal; 
        }
    }
    cout << fullInput << " in decimal is: " << endl;
    cout << decSum << endl;
    cin.ignore();
    cin.ignore();
}