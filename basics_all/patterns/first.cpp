#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t i = 0; i < n; i++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
