#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a >= b) {
        return a;
    }
    return b;
}
int max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c){
        return b;
    }
    return c;
}

int main() {
    int a, b, c;

    cout << "Въведете а, b и c за сръвнение: ";
    cin >> a >> b >> c;

    cout << "По-голямото число е: " << max(a, b, c) << endl;

    return 0;
}
