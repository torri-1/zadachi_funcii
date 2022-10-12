#include <iostream>

using namespace std;

void write(int n, int *p) {
    for (int i = 0; i < n; ++i) {
        cout << "A[" << i << "]= ";
        cin >> p[i];
    }
}

void output(int n, int *p) {
    cout << "A[]= ";
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }
}

int main() {
    int A[15];

    write(sizeof(A) / sizeof(int), A);
    output(sizeof(A) / sizeof(int), A);

    return 0;
}
