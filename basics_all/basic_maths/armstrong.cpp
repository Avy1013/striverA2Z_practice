#include <iostream>
using namespace std;

int main() {
    int n = 371;
    int check=n;
    int sum = 0;

    while (n!=0)
    {
        int temp = n%10;
        sum = sum + (pow(temp,3));
        n=n/10;
    }
    if (sum == check)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}