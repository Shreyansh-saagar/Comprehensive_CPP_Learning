/*
CODING NINJA MILESTONE 1 LECTURE 7 FUNCTIONS 

Fibonacci Number
Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1
*/


#include<iostream>
using namespace std;

bool checkMember(int n){
    int a = 1;
    int b ;
    int i;
    for(i = 0 ; i < n; i){
        b = i + a;
        i = a;
        a = b;
    }
    return i == n;
}


int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}