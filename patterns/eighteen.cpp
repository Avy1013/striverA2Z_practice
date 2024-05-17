#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int temp1 = n - 1;
    for (size_t i = 0; i < n; i++)
    {
        for (char j = 'A' + (n - 1); j >= 'A' + temp1; j--)
        {
            cout << j;
        }
        temp1--;
        cout << endl;
    }
}