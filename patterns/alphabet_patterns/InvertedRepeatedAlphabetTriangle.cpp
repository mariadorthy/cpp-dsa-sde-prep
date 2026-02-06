// Program to print a Inverted Repeated Alphabet Triangle pattern
// Input: n = 5
// Output:
// A B C D E 
// A B C D
// A B C
// A B
// A

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n=5;
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            char ch=('A'+j);
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}