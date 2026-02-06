// Program to print a Repeated Alphabet Triangle pattern
// Input: n = 5
// Output:
// A 
// B B
// C C C
// D D D D
// E E E E E
using namespace std;
#include <iostream>
#include <conio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        char ch=('A'+i);
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}
