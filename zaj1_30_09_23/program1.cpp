#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double r, obwod, pole;
    cout << "Podaj promien kuli = ";
    cin >> r;

    obwod = round(2 * M_PI * r);
    cout << "Obwod = " << obwod;

    pole = ceil(M_PI * pow(r,2));
    cout << "\nPole = " << pole; 

    return 0;
}