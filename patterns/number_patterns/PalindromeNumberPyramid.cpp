// Program to print a Palindrome Number Pyramid pattern
// Input: n = 5
// Output:
//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int k=i-1;k>=1;k--){
            cout<<k<<" ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}