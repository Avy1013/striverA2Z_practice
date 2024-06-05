#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int temp = n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t k = temp ; k < n; k++)
        {
            cout << " ";
        }
       
        
          for (size_t j = 0; j < (temp*2-1); j++)
       {
        cout<< "*";
       }
       
        
        
       
       temp--;
        
       cout << endl;
        
    }
    
}


