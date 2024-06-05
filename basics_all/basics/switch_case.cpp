#include<iostream>
using namespace std;
double areaSwitchCase(int ch, vector<double> a) {
	switch (ch){
		  case 1:
			return (3.1415926535 *(a[0]*a[0]));
        break;
		  case 2 :
			return (a[0]*a[1]);
        break;
	}
	return 0;
}

int main(){
    int result = areaSwitchCase(2,{2,4});
    cout << result;
    return 0;
}