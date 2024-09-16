#include <iostream>
using namespace std;

class Armstrong
{
public:
    int num;

    void accept()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void check()
    {
        int n1 = num, sum = 0, rem = 0;
        while (n1 != 0)
        {
            rem = n1 % 10;
            sum=sum+(rem*rem*rem);
            n1 = n1 / 10;
        }

        if (num == sum)
        {
            cout << " is an Armstrong Number";
        }
        else
        {
            cout << " is not an Armstrong Number";
        }
    }
};

int main()
{
    Armstrong p;
    p.accept();
    p.check();
    return 0;
}
