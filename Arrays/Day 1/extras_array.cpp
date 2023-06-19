#include<iostream>
using namespace std;

void fun(int arr[],int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }

}

int main(){
    int n;
    cin>>n;

    int arr[10];

    cout<<arr<<endl; //outputs location of arr array -> output begins with 0x which shows hexadecimal format rest is out location.

    cout<<sizeof(arr)<<endl; // sizeof function provides size of var and datatypes in byte.

    // Passing array to function
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    fun(arr,n);
}