#include<iostream>
#include<utility>
#include <vector>

using namespace std;

int main() {
    // explaining pair from utility library
    pair<int ,int > p = {1,2};
    cout << p.first << "----"  << p.second;
    cout <<endl;
    pair < pair<int ,int> , int> q = {p,3};
    cout << q.first.second << "----" << q.second << "----" << q.first.first;
    cout << endl;
    pair<int ,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].second << " this is from pair";
    cout << endl;

    //vectors
    vector<int> v1;
    v1 = {1,2,4,5,5,4,2,4};
    auto it = v1.begin(); // this points at the begining
    auto it2 = v1.end(); // points at the end+1 of the vector array
    auto it3 = v1.rbegin(); // points at the end of the array but when we do it3 ++ it will move toward the first element
    auto it4 = v1.rend();
    cout << *it << endl;    
    cout << (*(it2-1)) << "this is  .end"<< endl;     
    cout << (*(it3+1)) << endl;
    cout << (*(it4-2)) << endl; // points before the first element of the vector

    for(auto it : v1){
        cout << it << " ";  // neat way of printing this vector
    }
    cout << "this is from vector";

    v1.erase(it4.base()-4);  // prolly dosent support direct of rbegin and rend // can also use (v.begin/.end directly)
    cout << endl << "after deleting";
    cout << endl;
    v1.push_back(5);
    v1.insert(v1.end(),8);
    v1.emplace_back(9); // added 5 and 8 and 9  in the end
    for(auto it : v1){
        cout << it << " ";  // neat way of printing this vector
    }  
    cout << endl;
    cout << v1[v1.size()-1] << " last element of this array"<<endl;
    // cout << v1.size() << "size of vector";
    v1.pop_back();// removes last element
    cout << v1.empty()<< "boolean value";
    // v1.swap will swap it
    v1.clear(); //removes all the things

    return 0;
}