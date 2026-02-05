// Program to print a Number Square pattern
// Input: n = 5
// Output:
// 1 1 1 1 1
// 1 1 1 1 1
// 1 1 1 1 1
// 1 1 1 1 1
// 1 1 1 1 1
using namespace std;

#include<iostream>
#include<conio.h>

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"1 ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}