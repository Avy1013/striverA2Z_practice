#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  














     vector<string> s = {"i am a nice guy"};
       cout << "Before reversing: ";
         for (char c : s[0]) {
        cout << c;
    }
    cout << endl;
    
    reverse(s[0].begin(),s[0].end());

      cout << "After reversing: ";
    for (char c : s[0]) {
        cout << c;
    }
    cout << endl;
    
    // return 0;
}
