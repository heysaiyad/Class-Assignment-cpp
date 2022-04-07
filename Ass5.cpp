//Write a program in C++ which swap the values of two variables not using third variable

#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter x & y: ";
    cin>>x>>y;
    x= x+y;
    y= x-y;
    x= x-y;
    cout<<x<< " " <<y;


    return 0;
}
