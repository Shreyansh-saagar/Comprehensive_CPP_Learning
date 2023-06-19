/* 
CODING NINJA MILESTONE 2 LECTURE 8 ARRAYS

Linear Search

You have been given a random integer array/list(ARR) of size N, and an integer X. You need to search for the integer X in the given array/list using 'Linear Search'.
You have been required to return the index at which X is present in the array/list. If X has multiple occurrences in the array/list, then you need to return the index at which the first occurrence of X would be encountered. In case X is not present in the array/list, then return -1.
'Linear search' is a method for finding an element within an array/list. It sequentially checks each element of the array/list until a match is found or the whole array/list has been searched. 
*/

/* 
ROUGH WORK

array size -> n 
x search
return index of x
if multiple occurence of x show 1st occ index
if not present return -1

*/

#include <iostream>
using namespace std;

int linearsearch(int arr[],int n , int x){
    for(int i = 0; i < n ; i++){
        if(arr[i] == x){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int x;
    cin>>x;

    int arr[10];
    //Input array
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    cout<<linearsearch(arr,n,x);

}