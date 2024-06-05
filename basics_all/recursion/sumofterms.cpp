#include <iostream>
using namespace std;


int sumk(int n){
    int some = (n*(n+1)/2);
    cout << some;
    long long ans = (n*(n+1)/2) * (n*(n+1)/2);
    return ans;
}









// int sumk(int n){   // another implemention with while loop
//     int sum = 0;
//  while(n != 0){
//     sum = sum + pow(n,3);
//     n--;
//  }
//     return sum;
// }


// int sumk(int n){    // solution but time complexity to much prolly coz of recursion
//     if (n==0)
//     {
//         return 0;
//     }
//     int sum = pow(n,3)+sumk(n-1);
//     return sum;
// }

int main() {
    int n=7;

    int result = sumk(n);
    cout << result;
}