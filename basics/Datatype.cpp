// Program - Datatypes ==> type of value that assigned to variable this is important for which the memory will be allocated accordingly 
// Output:
// Sizeof short: 2
// Sizeof int: 4
// Sizeof long: 4
// Sizeof long long: 8
// Sizeof float: 4
// Sizeof double: 8
// Sizeof long double: 16
// Sizeof char: 1
// Sizeof boolean: 1
// Range of int:
// Max: 2147483647 Min:-2147483648
// Range of short:
// Max: 32767      Min:-32768
// Range of long:
// Max: 2147483647 Min:-2147483648
// Range of long long:
// Max: 9223372036854775807        Min:-9223372036854775808
// Range of unsigned int:
// Max: 4294967295
// Range of float:
// Max: 3.40282e+38        Min:1.17549e-38
// Range of double:
// Max: 1.79769e+308       Min:2.22507e-308
// Range of long double:
// Max: 1.18973e+4932      Min:3.3621e-4932
// Range of char:
// Max: 127        Min:-128
// Range of char(unsigned):
// Max: 255
// Year: 1996
// DOB: 9
// Population: 800000000
// Crores: 90000000000000000
// Big: 90000000000000000
// Differnces between int and long long:
// Int: -2147483648                Long Long: 2147483648
// Negative signed: -1
// Unsigned Positivr: 1
// Unsigned Negative: 4294967285
// Pi: 3.14
// Price: 100.6
// Population Approximately: 8.02405e+08
// Difference between float and double (same number 100.123456789)
// Float: 100.1234588623           Double: 100.1234567890
// Char: A
// Flag: 1
// integer(auto): 11
// Character(auto): r
// Integral Result: 2
// Floating Result: 2.6000000000
// Wrapped value(float): 100.9656982422
// Wraps: -2147483648

using namespace std;
// Primitive Type Families
// Integral (whole numbers) → short, int, long, long long, char
// Floating point (decimal numbers) → float, double, long double
// Logical → bool

#include<iostream>
#include <iomanip>
#include <float.h>
void sizeof_datatypes(){
    short year=1996;
    int dob=9;
    long population = 800000000L;
    long long crores = 90000000000000000LL;
    //Sizeof - datatypes
    cout<<"Sizeof short: "<<sizeof(year)<<endl;
    cout<<"Sizeof int: "<<sizeof(dob)<<endl; //int is at least 16 bits
    cout<<"Sizeof long: "<<sizeof(population)<<endl; //long is at least 32 bits
    cout<<"Sizeof long long: "<<sizeof(crores)<<endl;
    float pi=3.1400010f; //float ~ 6-7 decimal digits
    double price = 100.5998009864; // double ~ 15-16 ==> value will be approximated
    long double population_approximately = 802405350.9530234;
    cout<<"Sizeof float: "<<sizeof(pi)<<endl;
    cout<<"Sizeof double: "<<sizeof(price)<<endl;
    cout<<"Sizeof long double: "<<sizeof(population_approximately)<<endl;
    char ch='A';     // character is integral → actually stored as number internally
    cout<<"Sizeof char: "<<sizeof(ch)<<endl;
    bool flag=true; 
    cout<<"Sizeof boolean: "<<sizeof(flag)<<endl;
}
void range_datatypes(){
    //Range of Datatypes
    cout<<"Range of int: "<<"\nMax: "<<INT_MAX<<"\tMin:"<<INT_MIN<<endl;
    cout<<"Range of short: "<<"\nMax: "<<SHRT_MAX<<"\tMin:"<<SHRT_MIN<<endl;
    cout<<"Range of long: "<<"\nMax: "<<LONG_MAX<<"\tMin:"<<LONG_MIN<<endl;
    cout<<"Range of long long: "<<"\nMax: "<<LONG_LONG_MAX<<"\tMin:"<<LONG_LONG_MIN<<endl;
    cout<<"Range of unsigned int: "<<"\nMax: "<<UINT_MAX<<endl;
    cout<<"Range of float: "<<"\nMax: "<<FLT_MAX<<"\tMin:"<<FLT_MIN<<endl;
    cout<<"Range of double: "<<"\nMax: "<<DBL_MAX<<"\tMin:"<<DBL_MIN<<endl;
    cout<<"Range of long double: "<<"\nMax: "<<LDBL_MAX<<"\tMin:"<<LDBL_MIN<<endl;
    cout<<"Range of char: "<<"\nMax: "<<SCHAR_MAX<<"\tMin:"<<SCHAR_MIN<<endl;
    cout<<"Range of char(unsigned): "<<"\nMax: "<<UCHAR_MAX<<endl;
}
//C++ local primitive → uninitialized → garbage
void integer_values(){
    short year=1996;
    int dob=9;
    long population = 800000000L;
    long long crores = 90000000000000000LL;
    long long big = 90000000000000000;   // might overflow before storing (without LL)
    // Use int when range is enough, long long when numbers exceed.
    cout<<"Year: "<<year<<endl;
    cout<<"DOB: "<<dob<<endl;
    cout<<"Population: "<<population<<endl;
    cout<<"Crores: "<<crores<<endl;
    cout<<"Big: "<<big<<endl;
    int x=INT_MAX;
    long long y=INT_MAX;
    x+=1;
    y+=1;
    cout<<"Differnces between int and long long: "<<endl; 
    cout<<"Int: "<<x<<"\t\tLong Long: "<<y<<endl;
}
void signed_unsigned(){
    signed int negative=-1;
    unsigned int positive=1;
    unsigned int unsigned_negative=-11;    // unsigned integral → modulo wrap, no negative (result = 2^bits - value)
    cout<<"Negative signed: "<<negative<<endl;
    cout<<"Unsigned Positivr: "<<positive<<endl;
    cout<<"Unsigned Negative: "<<unsigned_negative<<endl; 
}
void float_precision(){
    float pi=3.1400010f; //float ~ 6-7 decimal digits
    double price = 100.5998009864; // double ~ 15-16 ==> value will be approximated
    long double population_approximately = 802405350.9530234;
    cout<<"Pi: "<<pi<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Population Approximately: "<<population_approximately<<endl;
    float f = 100.123456789f;    // floating type → stores approximation, not exact
    double d = 100.123456789;
    cout << fixed << setprecision(10);
    cout<<"Difference between float and double (same number 100.123456789)"<<endl;
    cout<<"Float: "<<f<<"\t\tDouble: "<<d<<endl; 
}
void wraps(){
    //Datatype identity
	cout<<"Integral Result: "<<(5/2)<<endl;
    cout<<"Floating Result: "<<(5.2/2)<<endl;
    float money = 100.9657f; // it will automatically approximate the value 
    cout<<"Wrapped value(float): "<<money<<endl;
    //when max exceeds wrap - wraps 
    int x=INT_MAX;
    cout<<"Wraps: "<<x+1<<endl;     // integral overflow → storage limit exceeded
}
int main(){
    sizeof_datatypes();
    range_datatypes();
    integer_values();
    signed_unsigned();
    float_precision();
    char ch='A';     // character is integral → actually stored as number internally
    cout<<"Char: "<<ch<<endl;
    bool flag=true; 
    cout<<"Flag: "<<flag<<endl;
    //auto 
    int x=10;
    auto &y=x;  
    y=11;
    auto cha='r';
    cout<<"integer(auto): "<<y<<endl;
    cout<<"Character(auto): "<<cha<<endl;
    wraps();
    cin.get();
    return 0;
}