#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    for (size_t i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i ; j++)
        {
            cout << j;
        }
        
        cout << endl;
    }
    
}