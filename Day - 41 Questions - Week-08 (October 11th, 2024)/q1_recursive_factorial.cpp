#include <iostream>
using namespace std;

long long factorial (int n) {
    if (n == 1) return 1;
    else return n * factorial (n-1);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}
