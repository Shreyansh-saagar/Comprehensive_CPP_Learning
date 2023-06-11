/*
****
***
**
*

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n ; i++){
        for(int j = n; j >= i ; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

/*
****
 ***
  **
   *

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >>n;

    
    for(int i = 1; i <=n; i++){
        for(int k = 1; k < i;k++){
            cout<<" ";
        }
        for(int j = n; j >= i ; j--){
            cout<<"*";
        }

        cout<<endl;
    }
}
*/

/*
CODING NINJA MILESTONE 1 LECTURE 5 PATTERNS 2

Code : Inverted Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n ; i++){
        int j = n -i +1;
        int num = j;
        for(j = n; j >= i ; j--){
            cout<<num;
        }
        num--;    
        cout<<endl;
    }
}