#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[10];
    
// Take input from user
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"input done -----------------------"<<endl;
    cout<<"Output :";
// Print array
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }

}