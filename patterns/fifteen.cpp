#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int temp=n;
    for (size_t i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A'+temp ; j++)
        {
            cout << j;
        }
        cout << endl;
        temp--;
    }
    
}

