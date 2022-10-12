#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a >= b) {
        return a;
    }
    return b;
}

int main() {
    int a, b;

    cout << "Въведете а и b за сръвнение: ";
    cin >> a >> b;

    cout << "По-голямото число е: " << max(a, b) << endl;

    return 0;
}
