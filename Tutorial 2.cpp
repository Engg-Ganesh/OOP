#include <iostream>
using namespace std;

int main() {
    int sum_even = 0;
    int sum_odd = 0;

    for (int i = 0; i <= 50; i++) {
        if (i % 2 == 0) {
            sum_even = sum_even + i;
        } else {
            sum_odd = sum_odd + i;
        }
    }

    cout << "Sum of even numbers bet 1 to 50 :" << sum_even << endl;
    cout << "Sum of odd numbers bet 1 to 50 :" << sum_odd << endl;

    return 0;
}
