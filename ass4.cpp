//Write a program in C++ to swap two numbers using third variable

#include<iostream>
using namespace std;
int main()
{
    int x,  y, a;
    cout<<"Enter a & b: ";
    cin>>x>>y;
    a=x;
    x=y;
    y=a;
    cout<<x<<y;


    return 0;
}
