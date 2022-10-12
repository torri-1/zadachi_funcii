#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool validate(double a, double b, double c) {
    return a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a;
}

double hireon(double a, double b, double c) {
    if (validate(a, b, c)) {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    return -1;
}

int main() {
    double a, b, c, S;
    cout << "Въведете страните a, b и c ";
    cin >> a >> b >> c;

    S = hireon(a, b, c);

    if (S == -1) {
        cout << " Триъгълникът не е валиден!" << endl;
    } else {
        cout << "Лицето на триъгълника е "
             << fixed
             << setprecision(2)
             << S << endl;
    }

    return 0;
}