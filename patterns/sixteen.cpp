#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char temp = 'A';
    for (int i = 0; i < n; i++)
    {
        
        for (char j = 0 ;j <= i ; j++)
        {
            cout << temp;
        }
        cout << endl;
        temp++;
    }
    
}