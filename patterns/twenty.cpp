#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int zero = (n * 2) - 2;
    int temp = 0;
    for (size_t i = 0; i < n; i++)
    {
        temp++;
        for (size_t j = 0; j < temp; j++)
        {
            cout << '*';
        }
        for (size_t k = 0; k < zero; k++)
        {
            cout << ' ';
        }
        for (size_t j = 0; j < temp; j++)
        {
            cout << '*';
        }
        zero = zero - 2;
        cout << endl;
    }
    zero = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        temp--;
        zero = zero + 2;
        for (size_t j = 0; j < temp; j++)
        {
            cout << '*';
        }
        for (size_t k = 0; k < zero; k++)
        {
            cout << ' ';
        }
        for (size_t j = 0; j < temp; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}