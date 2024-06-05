#include <iostream>
using namespace std;

int main() {
    int n=5;
   
    for (size_t i = 0; i < n; i++)

    {
         int temp = 1;
        for (size_t j = n; j > i; j-- )
        {
            cout << temp;
            temp++;
        }
        cout << endl;
        
    }
}