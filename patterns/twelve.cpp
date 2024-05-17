#include <iostream>
using namespace std;

int main() {
    int n=9;
    int temp = 1;
    int space = (n-1)*2;
    int second = 1;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 1; j <= temp; j++)
        {
            cout << j;
        }
        for (size_t k = 0; k < space; k++)
        {
            cout << " ";
        }
        for (size_t l = second; l > 0  ; l--)
        {
            cout << l;
        }
        
        temp++;
        space -= 2;
        second++;
       
        
        cout << endl;
        
    }
    
}