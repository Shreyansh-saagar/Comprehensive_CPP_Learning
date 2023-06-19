#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[10];

// Input
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    // int max = arr[0]; instead this use INT_MIN
    int max = INT_MIN;

// Compare
    for(int i = 0 ; i <n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<"max value is: "<<max;
}