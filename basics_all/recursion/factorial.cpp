#include <iostream>
using namespace std;

vector <long long> printFactorialNumbers(long long n) {
  long temp = 1;
  long long facto = 1;
   vector<long long>v1;
    while (temp <= n)
    {
      
      facto = facto * temp;
      if (facto > n)
      {
        break;
      }
      
      v1.push_back(facto);

      temp++;
    }
    return v1;
    
    

}
int main() {
    long long n=123456789;
    vector <long long > result = printFactorialNumbers(n);
    auto it = result.begin();
    for(auto it : result){
        cout << it << " ";  // neat way of printing this vector
    }  


}