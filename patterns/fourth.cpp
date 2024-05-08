#include <iostream>
using namespace std;

int main() {
    int n=3;
    int temp =1;
    for (size_t i = 0; i < n; i++)
    {
        
       for (size_t j = 0; j <= i; j++)
       {    
            cout << temp;
            
       }
       temp++;
       cout << endl;
    }
    
}