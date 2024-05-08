#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int temp = n;
    int temp2=1;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t k = 1 ; k < temp; k++)
        {
            cout << " ";
        }
        
       for (size_t j = 0; j < temp2; j++)
       {
        cout<< "*";
       }
       cout << endl;
       temp--;
       temp2 = temp2+2;
       
       
        
    }
    
}