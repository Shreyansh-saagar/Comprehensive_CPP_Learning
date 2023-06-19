/* 
CODING NINJA MILESTONE 2 LECTURE 8 ARRAYS
Arrange Numbers in Array

You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.
*/

#include <iostream>
using namespace std;

void populate(int arr[],int n){

    int val = 1;
    int start = 0;
    int end = n-1;
    while(start <= end) {
        if (val % 2 == 1) {
        arr[start] = val;
        val++;
        start++;
        } else {
            arr[end] = val;
            val++;
            end--;
        }
    } 

    //Print array
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" | ";
    }
}

int main(){
    int n;
    cin>>n;

    int arr[50];
    populate(arr,n);
}