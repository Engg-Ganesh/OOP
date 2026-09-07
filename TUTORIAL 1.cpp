#include <iostream>
using namespace std;

int fac(int k) {
    int res = 1;
    for (int i = k; i >= 1; i--) {
        res = res * i;
    }
    return res;
}

int binocoeff(int m, int l) {
    int coeff = fac(m) / (fac(l) * fac(m - l));
    return coeff;
}

void printpascal(int d) {
    for (int i = 0; i < d; i++) {
        for (int space = 0; space < d - i; space++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << " " << binocoeff(i, j);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "enter the no of rows: ";
    cin >> n;
    printpascal(n);

    return 0;
}
