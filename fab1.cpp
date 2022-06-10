/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

/*

Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21
*/
int main()

{

    int x = 0 ; int y = 1;
    
    cout<< x << " " << y <<" ";
    for (int i=0; i<10; i++){
        int z = x+y;
        cout << z <<" ";
        x=y;
        y=z;
    }
}
