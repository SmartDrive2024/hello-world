#include <iostream>
using namespace std;

class sm {
public:
    int num, reversed = 0, remainder;

    void accept() {
        cout << "Enter The Number: ";
        cin >> num;
    }

    void reversenumber() {
        while (num != 0) {
            remainder = num % 10;
            reversed = (reversed * 10) + remainder;
            num = num / 10;
        }
    }

    void display() {
        cout << "Reversed number is: " << reversed;
    }
};

int main() {
    sm b; 
    b.accept();
    b.reversenumber(); 
    b.display(); 
    return 0;
}
