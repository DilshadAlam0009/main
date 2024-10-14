#include <iostream>
using namespace std;

int fun(int n)
{
    if (n < 1)
        return 0;
    while (n != 1)
    {

        if (n % 2 == 1)
            return 0;

        n /= 2;
    }
    return 1;
}

int main()
{
    int x;
    cout << "enter the number ";
    cin >> x;
    cout << fun(x);
    return 0;
}