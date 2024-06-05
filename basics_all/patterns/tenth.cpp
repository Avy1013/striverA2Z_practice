#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout << "*" << " ";
            
        }
        cout << endl;
    }
    int temp = n-1;
    for (size_t i = 0; i < n; i++)
    {

        for (size_t j = 0; j < temp; j++)
        {
            cout << "*" << " ";
        }
        temp--;
        cout << endl;
    }
}