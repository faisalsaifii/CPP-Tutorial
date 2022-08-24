#include <iostream>// contains all C++ streams
#include <cstdio> // contains all old C functions to print and write to files (printf(), fprintf(), fopen(), etc)

// If you don't use this statement then use std with every stream
using namespace std;

int main(){
    // Print using iostream
    cout << "Print using cout\n";
    // Print using printf
    printf("Print using printf\n");
    // Standard COUT
    std::cout<<"Print using std::cout\n";

    // Declaring a variable
    // Integer
    // Range : -2147483648 to 2147483647
    // Size : 4 bytes
    int i; 
    // Double
    // Size : 8 bytes
    double d;
    // Boolean
    // Range : true or false
    bool b = true;
    // Character
    // Range : -128 to 127 or - to 255
    // Size : 1 byte
    char c;
    // Float
    // Size : 4 bytes
    float f;
    // Long
    long l;
    // Wide Character
    // Size : 2 or 4 bytes
    wchar_t w; 

    // sizeof() returns size of parameter
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of wide char : " << sizeof(wchar_t) << endl;
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of bool : " << sizeof(bool) << endl;

    // Input
    cout << "Enter a number: ";
    cin >> i;
    cout << "You entered " << i << endl;

    // If Else Condition
    int j;
    cout << "Enter first number: ";
    cin >> i;
    cout << "Enter second number: ";
    cin >> j;
    if (i==j)
        cout << "Equal";
    else if (i>j)
        cout << "Greater";
    else
        cout << "Smaller";
    return 0;

    // For Loop
    for(int i = 0 ; i < 10 ; i++){
        cout << "* ";
    }

    // Array
    // One Dimensional
    int a[10];
    for(int i=0 ; i<10 ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<10 ; i++){
        cout<<a[i]<<endl;
    }
    
}