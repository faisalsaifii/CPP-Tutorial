#include <iostream>// contains all C++ streams
#include <cstdio> // contains all old C functions to print and write to files (printf(), fprintf(), fopen(), etc)

using namespace std;
int main()
{
    // Print using iostream
    cout << "Print using cout\n";
    // Print using printf
    printf("Print using printf\n");

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

    return 0;
}