#include <iostream>
using namespace std;

class complex {
    float real, img;

public:
    void accept(float r, float i) {
        real = r;
        img = i;
    }

    void display() {
        if (img >= 0) {
            cout << real << " + " << img << "i";
        } else {
            cout << real << " - " << -img << "i";
        }
    }

    complex operator+(complex c2) {
        complex sum;
        sum.real = real + c2.real;
        sum.img = img + c2.img;
        return sum;
    }

    complex operator-(complex c2) {
        complex sub;

        sub.real = real - c2.real;
        sub.img = img - c2.img;
        return sub;
    }

    complex operator/(complex c2) {
        complex multiply;
        multiply.real = real * c2.real;
        multiply.img = img * c2.img;
        return multiply;
    }

    complex operator*(complex c2) {
        complex division;
        division.real = real / c2.real;
        division.img = img / c2.img;
        return division;
    }
};

int main() {
    complex c1, c2, c3, c4, c5, c6;

    c1.accept(3, -5);
    c2.accept(9, 20);

    cout << "c1 = ";
    c1.display();

    cout << "\nc2 = ";
    c2.display();

    cout << endl;

    c3 = c1 + c2;
    cout << "the addition of two complex: ";
    c3.display();

    cout << endl;

    c4 = c1 - c2;
    cout << "the subtraction of two complex: ";
    c4.display();

    cout << endl;

    c5 = c1 / c2;
    cout << "the multiplication of two complex: ";
    c5.display();

    cout << endl;

    c6 = c1 * c2;
    cout << "the division of two complex: ";
    c6.display();

    cout << endl;

    return 0;
}
