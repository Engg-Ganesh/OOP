#include <iostream>
using namespace std;

int add(int a, int b, int c) {
    return (a + b + c);
}

float add(float p, float q, float r) {
    return (p + q + r);
}

int main() {
    int a, b, c;
    float p, q, r;

    cout << "Enter a,b,c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Emter p,q,r" << endl;
    cin >> p;
    cin >> q;
    cin >> r;

    cout << "addition of three integer: " << add(a, b, c) << endl;
    cout << endl << "addition of three float: " << add(p, q, r) << endl;

    return 0;
}
