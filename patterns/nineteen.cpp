#include <iostream>
using namespace std;

int main() {
    int n=65;
    int temp = n;
    int zero = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < temp; j++)
        {
           cout << '*';
        }
        for (size_t k = 0; k < zero ; k++)
        {
            cout << ' ';
        }
        for (size_t j = 0; j < temp; j++)
        {
           cout << '*';
        }
        
        
        zero=zero+2;
        cout << endl;
        temp--;
    }
    zero = zero-2;
    for (size_t i = 0; i < n; i++)
    {
        temp++;
        for (size_t j = 0; j < temp ; j++)
        {
            cout << '*';
        }
        for (size_t k = 0; k < zero; k++)
        {
            cout << ' ';
        }
        for (size_t j = 0; j < temp ; j++)
        {
            cout << '*';
        }
        zero = zero-2;
        cout << endl;
        
        
        
    }
    
}