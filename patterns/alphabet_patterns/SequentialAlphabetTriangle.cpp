// Program to print a Sequential Alphabet Triangle pattern
// Input: n = 5
// Output:
// A 
// A B
// A B C
// A B C D
// A B C D E

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            char ch=('A'+j);
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}