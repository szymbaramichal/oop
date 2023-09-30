#include <cmath>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2;

    cout << "Podaj liczbe nr 1 = ";
    cin >> num1;

    cout << "Podaj liczbe nr 2 = ";
    cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int restOfDivision = num1 % num2;
    int quotientWholeNumber = num1 / num2;
    double quotientRealNumber = (double)num1 / num2;
    int power = pow(num1,2);

    cout << sum << endl;
    cout << difference << endl;
    cout << product << endl;
    cout << restOfDivision << endl;
    cout << quotientWholeNumber << endl;
    cout << quotientRealNumber << endl;
    cout << power;
    return 0;
}