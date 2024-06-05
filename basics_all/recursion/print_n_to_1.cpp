#include <iostream>
using namespace std;

void printnto1(int N){
    if (N==0)
    {
        return;
    }
    cout << N;
    printnto1(N-1);
    
}
int main() {
    int n=5;
    printnto1(n);
}