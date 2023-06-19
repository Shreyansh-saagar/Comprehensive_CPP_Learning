#include <iostream>
using namespace std;

void swaparr(int arr[],int n){
    /*
    //Using While loop
    int i = 0 , j = n - 1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    } 
    */

    //Using For loop    
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

}

int main(){
    int n;
    cin>>n;
    int arr[10];

    //Input
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    swaparr(arr,n);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" | ";
    }
}