#include <iostream>
using namespace std;

int main() {
    int n=4;
    int temp = n;
    for (size_t i = 0; i < n; i++)
    {
        char k = 'A';
        for (size_t j = 0; j < temp-1; j++)
        {
            cout << " ";
        }
        for (; k <= 'A'+i; k++)
        {
            cout << k;
        }
        for (char l = k-2; l >= 'A'; l--)
        {
            cout << l;
        }
        
        temp--;
        cout << endl;
    }
    
}