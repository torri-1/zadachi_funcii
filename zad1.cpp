#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double obem(double r, double h) {
    double S;
    S = M_PI * r * r;
    return S * h;
}

int main() {
    double r, h;

    cout << "Въведете радиус r= ";
    cin >> r;
    cout << "Въведете височина h= ";
    cin >> h;

    cout << "Обемът на цилиндъра е "
         << fixed
         << setprecision(3)
         << obem(r, h) << endl;

    return 0;
}
