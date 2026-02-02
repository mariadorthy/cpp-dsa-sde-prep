// Program to print a Inverted Left Triangle pattern
// Input: n = 5
// Output:
// *****
// ****
// ***
// **
// *

using namespace std;
#include <iostream>
#include <conio.h>

int main(){
    int n=5;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}