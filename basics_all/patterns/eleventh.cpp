#include <iostream>
using namespace std;

int main() {
    int n=6;
    int temp=n;
    for (size_t i = 0; i < n; i++)
    {

        for (size_t j = temp-1; j < n; j++)
        {
            if (j%2==0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
            
            
        }
        temp--;
        cout << endl;
    }
    
}