#include <iostream>
#include <cmath> // For sqrt
using namespace std;

int main()
{
    int N = 5;
    int sum = 0;

    for (int i = 1; i <= N; i++)
    {
        sum += i * (N / i);
    }

    cout << sum << endl;
    return 0;
}
