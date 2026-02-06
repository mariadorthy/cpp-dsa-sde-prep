// Program to print a Floyd Triangle pattern
// Input: n = 5
// Output:
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=5,k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<"\n";
    }
    getch();
    return 0;
}