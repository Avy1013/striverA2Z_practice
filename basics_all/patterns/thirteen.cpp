#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int temp = 1;
    int number = 1;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < temp; j++)
        {
            cout << number<< " ";
            number++;
        }
        temp++;
        cout << endl;

        
    }
    
}