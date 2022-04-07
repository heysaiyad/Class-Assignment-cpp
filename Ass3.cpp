//Write a program in C++ to display the operation of pre and post increment and decrement.//

#include <iostream>
using namespace std;
 
main() {
   int a = 21;
   int c ;
 
   // Value of a will not be increased before assignment.
   c = a++;   
   cout << "Line 1 - Value of a++ is :" << c << endl ;
 
   // After expression value of a is increased
   cout << "Line 2 - Value of a is :" << a << endl ;
 
   // Value of a will be increased before assignment.
   c = ++a;  
   cout << "Line 3 - Value of ++a is  :" << c << endl ;
   return 0;
}