#include <iostream>
using namespace std;

class AreaCalculator {
public:
    void calculateArea(int* r, double* area) {
        *area = 3.14 * (*r) * (*r);
    }
};

int main() {
    int r;
    double area = 0.0;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    AreaCalculator calculator;
    calculator.calculateArea(&r, &area);

    cout << "Area of the circle: " << area << endl;
    return 0;
}
