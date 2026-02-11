// Program - PalindromeNumber
// Output:
//Enter the number: 
//121
//121 is a palindrome
//
//Enter the number: 
//123
//123 is not a palindrome

using namespace std;
#include<iostream>
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int rev=0,t=n,digits=0;
    while(t>0){
        digits=t%10;
        rev=rev*10+digits;
        t=t/10;
    }
    if(rev == n){
        cout<<n<<" is a palindrome";
    }
    else{
        cout<<n<<" is not a palindrome";
    }
    cin.get();
    return 0;
}