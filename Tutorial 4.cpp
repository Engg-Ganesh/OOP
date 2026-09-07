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

    void add(complex c1, complex c2) {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }

    void sub(complex c1, complex c2) {
        real = c1.real - c2.real;
        img = c1.img - c2.img;
    }

    void mult(complex c1, complex c2) {
        real = (c1.real * c2.real) - (c1.img * c2.img);
        img = (c1.real * c2.img) + (c1.img * c2.real);
    }

    void divide(complex c1, complex c2) {
        float denominator = (c2.real * c2.real) + (c2.img * c2.img);
        real = (c1.real * c2.real + c1.img * c2.img) / denominator;
        img = (c1.img * c2.real - c1.real * c2.img) / denominator;
    }
};

int main() {
    complex c1, c2, c3, c4, c5, c6;

    c1.accept(2, -6);
    c2.accept(4, 10);

    cout << "c1 = ";
    c1.display();

    cout << "\nc2 = ";
    c2.display();

    c3.add(c1, c2);
    cout << "\n\nAddition: ";
    c3.display();

    c4.sub(c1, c2);
    cout << "\nSubtraction: ";
    c4.display();

    c5.mult(c1, c2);
    cout << "\nMultiplication: ";
    c5.display();

    c6.divide(c1, c2);
    cout << "\nDivision: ";
    c6.display();

    cout << endl;

    return 0;
}
