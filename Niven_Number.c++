#include <iostream>
using namespace std;

class niven {
public:
    int num;

    void accept() {
        cout << "Enter a Number: ";
        cin >> num;
    }

    void nivenNumber() {
        if (num % 10 == 9 || num % 9 == 0) {
            cout << "It is a Niven Number.";
        } else {
            cout << "It is not a Niven Number.";
        }
    }
};

int main() {
    niven n;
    n.accept();
    n.nivenNumber();
    return 0;
}
