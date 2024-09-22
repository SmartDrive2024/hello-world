#include <iostream>
#include <math.h>

int main() {
    float r1, r2;
    int a, b, c, d;

    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;

    d = (b * b) - (4 * a * c);

    if (d == 0) {
        r1 = (-1) * b / (2 * a);
        std::cout << "The roots are same and equal: " << r1;
    } else if (d < 0) {
        std::cout << "The roots are imaginary.";
    } else {
        r1 = (-1) * b + sqrt(d) / (2 * a);
        r2 = (-1) * b - sqrt(d) / (2 * a);
        std::cout << "Roots are " << r1 << " and " << r2;
    }

    return 0;
}
