#include <iostream>
using namespace std;

int reverse_int(long int x)
{
    long int r=0;
    while (x != 0)
        {
            int temp = x%10;
        r =temp + r*10;
        x = x/10;
        }
    if (r <= 2147483647 && r > (int)-(pow(2, 31)))
    {
        return r;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n = 1534236469;
    long int result = reverse_int(n);
    cout << result << endl;
}