// goldenRatioCalc
// from C++ from the impatient
# include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int i = 0;
    int n = 0;
    double prev1 = 1.0, prev2 = 1.0, curr;
    double ratio;
    cout << "print the fib number to take: " << endl;
    cin >> n;
    cout.precision(15);
    if (n <= 1){
        ratio = prev2/prev1;
    }
    while(i <= n){
        curr = prev2 + prev1;
        prev2 = prev1;
        prev1 = curr;
        i++;
        ratio = prev1/prev2;
    }
    cout << "the ratio is: " << ratio << endl;
    cout << "press ENTER to exit the pgrm" << endl;
    cin.ignore();
    cin.ignore();
}
