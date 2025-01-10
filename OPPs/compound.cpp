#include <iostream>
#include <cmath> // For the pow() function

using namespace std;

int main() {
    double P, r, t, A;

    // Input the principal amount, interest rate, and time
    cout << "Enter the principal amount (P): ";
    cin >> P;
    cout << "Enter the annual interest rate (r in %): ";
    cin >> r;
    cout << "Enter the time (t in years): ";
    cin >> t;

    // Compound interest formula: A = P * (1 + r/100)^t
    A = P * pow(1 + r / 100, t);

    // Output the result
    cout << "The accumulated amount (A) after " << t << " years is: " << A << endl;

    return 0;
}
