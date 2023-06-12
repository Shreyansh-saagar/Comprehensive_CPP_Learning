/*
CODING NINJA MILESTONE 1 LECTURE 7 FUNCTIONS 

Fahrenheit to Celsius Table
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Note: You don't have to write the main function or take input. It has already been taken care of. Just write the code that prints Fahrenheit to Celsius table in the function itself.
Input Format :
3 integers - S, E and W respectively 
*/

#include <iostream>
using namespace std;

void printTable(int s , int e , int w){

    for(int i = s ; i<= e ; i = i + w){
        int cel = (i - 32) / 1.8;
        cout<<i<<" "<<cel<<endl;
    }
}

int main(){
    int s,e,w;
    cin>>s>>e>>w;
    printTable(s, e, w);
}