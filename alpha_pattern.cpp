/*
ABCD
ABCD
ABCD
ABCD

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= n; j++){
            char ch = 'A' + j - 1;
            cout<<ch;
        }
        cout<<endl;
    }
}
*/
/*
ABCD
BCDE
CDEF
DEFG

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        char c = 'A' + i -1;
        for(int j = 1 ; j <= n; j++){
            char ch = c + j - 1;
            cout<<ch;
        }
        cout<<endl;
    }
}
*/


/*
CODING NINJA MILESTONE 1 LECTURE 4 PATTERNS 1

Code : Alpha Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1 ; i <= n ; i++){
        char ch = 'A'+i -1;
        for(int j = 1 ; j <= i ; j++){
            cout<<ch;
        }
        cout<<endl;
    }
}
*/


/*
CODING NINJA MILESTONE 1 LECTURE 4 PATTERNS 1

Code : Character Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1 ; i <= n ; i++){
        char ch = 'A'+i -1;
        for(int j = 1 ; j <= i ; j++){
            char c = ch + j -1;
            cout<<c;
        }
        cout<<endl;
    }
}
*/


/*
CODING NINJA MILESTONE 1 LECTURE 4 PATTERNS 1

Code : Interesting Alphabets
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = n ; i >= 1 ; i--){
        for(int j = i ; j <= n ; j++){
            char c = 'A' + j -1;
            cout<<c;
        }
        cout<<endl;
    }
}
*/
