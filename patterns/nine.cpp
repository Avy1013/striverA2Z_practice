#include <iostream>
using namespace std;

int main() {
    int n=70;
    int temp = n;
    int temp2=1;
    int jkl = n;
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
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t k = jkl ; k < n; k++)
        {
            cout << " ";
        }
       
        
          for (size_t j = 0; j < (jkl*2-1); j++)
       {
        cout<< "*";
       }
       
        
        
       
       jkl--;
        
       cout << endl;
        
    }
}