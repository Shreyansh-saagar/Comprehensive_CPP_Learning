#include <iostream>
using namespace std;

int fact(int n){
        int fact = 1;
        for(int i = 1 ; i <= n ; i++ ){
            fact = fact * i;
        }
        return fact;
}

bool isPrime(int n){

    for(int i = 2; i < n ; i++ ){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n , r;
    cin>>n >> r;

/*     int fact_n = 1;
    for(int i = 1 ; i <= n ; i++){
        fact_n = fact_n * i;
    }

    int fact_r = 1;
    for(int i = 1 ; i <= r ; i++){
        fact_r = fact_r * i;
    }

    int fact_nr = 1;
    for(int i = 1; i <= n - r ; i++){
        fact_nr = fact_nr * i;
    } */

    int fact_n =  fact(n);
    int fact_r =  fact(r);
    int fact_nr =  fact(n-r);

    cout<< fact_n/(fact_r * fact_nr)<<endl;
    cout<<isPrime(31);
}