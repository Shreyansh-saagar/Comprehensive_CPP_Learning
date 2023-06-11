/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<("*");
        }
        cout<<endl;
    }
}
*/

/*
1111
2222
3333
4444


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
*/

/*
1234
1234
1234
1234


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i = 0; i< n;i++){
        for(int j = 0 ; j < n; j++){
            cout<< j+1;
        }
        cout<<endl;
    }
}

*/

/*
4321
4321
4321
4321


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n ; j++){
            cout<< n-j;
        }
        cout<<endl;
    }
}
*/







/*
CODING NINJA MILESTONE 1 LECTURE 4 PATTERNS 1

Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444 
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<(n);
        }
        cout<<endl;
    }
}


