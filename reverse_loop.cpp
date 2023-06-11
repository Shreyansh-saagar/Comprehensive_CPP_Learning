/*
   *
  **
 ***
****


#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    for(int i = 1 ; i <=n ;i++){
        for(int j = 1; j <= n-i;j++){
            cout<<" ";
        }
        for(int k = 1 ; k<= i ;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/


/*
CODING NINJA MILESTONE 1 LECTURE 5 PATTERNS 2

Code : Mirror Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
   1
  12
 123
1234

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    for(int i = 1 ; i <=n ;i++){
        for(int j = 1; j <= n-i;j++){
            cout<<" ";
        }
        for(int k = 1 ; k<= i ;k++){
            cout<<k;
        }
        cout<<endl;
    }
}
*/
