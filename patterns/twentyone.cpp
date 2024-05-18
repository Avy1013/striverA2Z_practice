#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (size_t i = 0; i < n; i++)
    {
        cout << '*';
    }
    cout << endl;
    for (size_t i = 0; i < n - 2; i++)
    {
        cout << '*';
        for (size_t j = 0; j < n - 2; j++)
        {
            cout << ' ';
        }
        cout << '*';
        cout << endl;
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << '*';
    }
}