// Program to print a solid square pattern
// Input: n = 5
// Output:
// *****
// *****
// *****
// *****
// *****

using namespace std;
#include <iostream>
#include <conio.h>

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}