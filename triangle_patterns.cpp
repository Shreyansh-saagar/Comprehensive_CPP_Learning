/* 
1
12
123
1234

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n ;

    for(int i = 0 ; i<n ; i++){
        for(int j = 0; j <= i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

*/

/* 
1
23
345
4567

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
        int p = i;
        for(int j = 0  ; j <= i;j++){
            cout<<p+1;
            p++;
        }
        cout<<endl;

    }
    return 0;
}
*/

/* 
1
23
456
789 10


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p = 1;
    for(int i  = 0 ; i <n ; i++){
        for(int j = 0; j<=i ; j++){
            cout<<p;
            p++;
        }
        cout<<endl;
    }

    return 0;
}
*/


/*
CODING NINJA MILESTONE 1 LECTURE 4 PATTERNS 1

Code : Triangular Star Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
*
**
***
****

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

/*
CODING NINJA MILESTONE 1 LECTURE 4 PATTERNS 1

Code : Triangle Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
22
333
4444

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
*/

/*
CODING NINJA MILESTONE 1 LECTURE 4 PATTERNS 1

Code : Reverse Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<i-j+1;
        }
        cout<<endl;
    }
}
*/
