#include <iostream>
using namespace std;

int main() {
    
    int arr[13] = {0};
    vector <int> v2 = {1,2,3,4,1,3,2};
    for(auto c : v2){
        
        cout << c;  
    }
    cout << endl;
    for(auto c : v2){
        
        arr[c]++;
        
    }
    cout << "hash map: ";
    for (size_t i = 0; i < 13; i++)
    {
        cout << arr[i];
    }
        
    
    
   
    
}