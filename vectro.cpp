#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a;
    a.push_back(5);
    a.push_back(8);
    a.push_back(6);
    a.push_back(1);

    for (int i = 0; i < 4; i++)
    {
        cout << a[i];
    }
    cout << a.front();
    return 0;
}