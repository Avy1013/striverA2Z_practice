#include<iostream>
using namespace std;

int main() {
	int n=132456;
    int evetemp=0,oddtemp=0;
	// cin >> n;
	while (n!=0)
    {
       int temp = n%10;
       if (temp%2==0)
       {
        evetemp= evetemp+temp;
       }
       if (temp%2!=0)
       {
        oddtemp= oddtemp+temp;
       }
       n = n/10;
    }
    cout << evetemp <<" " << oddtemp;
    
	
}
