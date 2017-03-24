// while n input
# include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n;
    while (cin >> n, n > 0) {
        cout << "n is " << n << endl;
    }
    cout << "the loop is now terminated" << endl;
    cin.ignore();
    cin.ignore();
    return 0;
}