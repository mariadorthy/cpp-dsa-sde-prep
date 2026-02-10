// Program - ReverseNumber.java
// Output:
// Enter the number: 
// 123
// Reverse Number: 321

using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int digits=0,rev=0,t=n;
    while(t>0){
        digits=t%10;
        rev=rev*10+digits;
        t=t/10;
    }
    cout<<"Reverse Number: "<<rev;
    getch();
    return 0;
}