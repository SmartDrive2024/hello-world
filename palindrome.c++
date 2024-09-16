#include <iostream>
using namespace std;

class palindrome
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
        int n1 = num, rev = 0, rem = 0;
        while (n1 != 0)
        {
            rem = n1 % 10;
            rev = (rev * 10) + rem;
            n1 = n1 / 10;
        }

        if (num == rev)
        {
            cout << "Number is a palindrome";
        }
        else
        {
            cout << "Number is not a palindrome";
        }
    }
};

int main()
{
    palindrome p;
    p.accept();
    p.check();
    return 0;
}
