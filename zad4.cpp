#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void obem(double r, double h, double &V) {
    double S;
    S = M_PI * r * r;
    V = S * h;
}

int main() {
    double r, h, V;

    cout << "Въведете радиус r= ";
    cin >> r;
    cout << "Въведете височина h= ";
    cin >> h;

    obem(r,h,V);

    cout << "Обемът на цилиндъра е "
         << fixed
         << setprecision(3)
         << V << endl;

    return 0;
}
