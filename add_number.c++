#include <iostream>
using namespace std;

class digit
{
public:
    int a, b, sum = 0;

    void accept()
    {
        cout << "Enter 2 nos: ";
        cin >> a >> b;
    }

    void calculateSum()
    {
        sum = a + b;
    }

    void display()
    {
        cout << "The result is = " << sum;
    }
};

int main()
{
    digit ob;
    ob.accept();
    ob.calculateSum();
    ob.display();
    return 0;
}
