#include<iostream>
using namespace std;
int main(){
    int num,num2;
    cin >> num >> num2;
    if(num>num2){
        cout << "greater";
    }
    else if (num < num2){
        cout << "smaller";
    }
    else
        cout <<"equal";
}