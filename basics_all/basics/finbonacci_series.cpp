#include<iostream>

using namespace std;
int fibonaaci(int n);
int main()
{
        int n=5;
        int result = fibonaaci(n);
        cout << result;
        
        
}
int fibonaaci(int n){
          int a = 0, b = 1, nextTerm;
if (n==0)
{
    return 0;
}
else if(n==1){
    return 1;
}
else
    
    for (size_t i = 0; i < (n-1); i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
    }
    return nextTerm;


        
}