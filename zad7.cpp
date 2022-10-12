#include <iostream>

using namespace std;

void write(int n, int *p) {
    for (int i = 0; i < n; ++i) {
        cout << "A[" << i << "]= ";
        cin >> p[i];
    }
}

int max(int n, const int *p) {
    int max = p[0];
    for (int i = 1; i < n; ++i) {
        if (p[i] > max) max = p[i];
    }
    return max;
}

void output(int n, int *p) {
    cout << "A[]= ";
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }
}

int main() {
    int A[20];

    write(sizeof(A) / sizeof(int), A);
    cout << "Най-големият елемент в масива е "
         << max(sizeof(A) / sizeof(int), A) << endl;

    return 0;
}