#include <iostream>
using namespace std;
bool prime(int n){
     for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
            break;
        }
        }
        return true;
}

int main() {
    int n=77;
    bool result = prime(n);
    cout << boolalpha << result;
    }
    
