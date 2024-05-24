//{ Driver Code Starts
#include<iostream> 
using namespace std;

// } Driver Code Ends

    int evenlyDivides(int N){
        int count=0;
        int temp=N;
        while(temp != 0){
            int digit = temp % 10;
            if(digit != 0 && (N%digit)==0  ){
                count++;
            }
            temp=temp/10;
        }
        return count;
    }


//{ Driver Code Starts.
int main() 
{ 
    int N=22074;
    // cin >> N;
    int result = evenlyDivides(N);
    cout << result;
    
    
}
// } Driver Code Ends