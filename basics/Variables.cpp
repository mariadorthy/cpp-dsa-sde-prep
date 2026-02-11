// Program - Variables
// Output:
// ----------------Global Variable is executed now----------------
// x: 5
// ----------------Local Variable is executed now----------------
// this is local variable function using global variable inside local variable function explicitly: 5
// X:10
// ----------------Instance Variable is executed now----------------
// Student1: 1
// Student2: 2
// ----------------Static Variable is executed for 3 times----------------
// 1
// 2
// 3
// ----------------Const Variable is executed now----------------
// A:100
// ----------------Local VS Instance variable is executed now----------------
// this is local variable - id: 20
// this is instance variable - id: 10
// ----------------Scope of Variable is executed now----------------

using namespace std;
#include<iostream>
int x=5; // this is global variable
class Student{
public:
    int id=10; // this is instance variable
    void LocalvsInstance(){
        int id=20;
        cout<<"this is local variable - id: "<<id<<endl;
        cout<<"this is instance variable - id: "<<this->id<<endl;
    }
};
void LocalVariable(){
    int x=10;
    cout<<"this is local variable function using global variable inside local variable function explicitly: "<<::x<<endl; 
    cout<<"X:"<<x<<endl; // this is local variable which is overshadowing the global variable
}
void InstanceVariable(){
    Student s1,s2;
    s1.id=1;
    s2.id=2;
    cout<<"Student1: "<<s1.id<<endl;
    cout<<"Student2: "<<s2.id<<endl;
}
void StaticVariable(){
    static int i=1; // Even i called many times, it will be initialized only once because of static variable 
    cout<<i<<endl;
    i++;
}
void ConstVariable(){
    const int a = 100;
    cout<<"A:"<<a<<endl;
    // a=101;  // shows an error 
}
void ScopeofVariable(){
// Block of code - Scope of Variable
{
    int temp=5;
}
// cout<<temp; // shows error
}

int main(){
    cout<<"----------------Global Variable is executed now----------------"<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"----------------Local Variable is executed now----------------"<<endl;
    LocalVariable();
    cout<<"----------------Instance Variable is executed now----------------"<<endl;
    InstanceVariable();
    cout<<"----------------Static Variable is executed for 3 times----------------"<<endl;
    StaticVariable();
    StaticVariable();
    StaticVariable();
    cout<<"----------------Const Variable is executed now----------------"<<endl;
    ConstVariable();
    Student s;
    cout<<"----------------Local VS Instance variable is executed now----------------"<<endl;
    s.LocalvsInstance();
    cout<<"----------------Scope of Variable is executed now----------------"<<endl;
    ScopeofVariable();
    cin.get();
    return 0;
}