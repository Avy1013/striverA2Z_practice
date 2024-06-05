#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int temp = n;
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
