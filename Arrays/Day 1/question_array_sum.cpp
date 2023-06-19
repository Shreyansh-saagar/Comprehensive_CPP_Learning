/* 
CODING NINJA MILESTONE 2 LECTURE 8 ARRAYS
Array Sum

Given an array of length N, you need to find and print the sum of all elements of the array.
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[10];

    //Input
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    //Sum
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    cout<<"sum of all elements present in array is : "<<sum;
}