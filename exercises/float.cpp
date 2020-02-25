#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    puts("Floating point type usage in C:");
    
    // Floating point types
    float			floatNumber;
    double			doubleNumber;
    
    // Size of floating point types
    cout << "Storage size for unsigned float : " << setprecision(0) << sizeof(float) << " bytes" << endl;
    cout << "Storage size for double: " << setprecision(0) << sizeof(double) << " bytess" << endl;
    
    floatNumber = 2.0/3.0;
    doubleNumber = 2.0/3.0;
    
    puts("\nCompare precision at 4 decimal points:");
    cout << "floatNumber = " << setprecision(4) << floatNumber << endl;
    cout << "doubleNumber = " << setprecision(4) << doubleNumber << endl;
    
    std::setprecision(10);
    puts("\nCompare precision at 10 decimal points:");
    cout << "floatNumber = " << setprecision(10) << floatNumber << endl;
    cout << "doubleNumber = " << setprecision(10) << doubleNumber << endl;
    
    std::setprecision(30);
    puts("\nCompare precision at 30 decimal points:");
    cout << "floatNumber = " << setprecision(30) << floatNumber << endl;
    cout << "doubleNumber = " << setprecision(30) << doubleNumber << endl;
    return 0;
}