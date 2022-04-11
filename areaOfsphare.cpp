// Find the area of sphere .

#include<iostream>
using namespace std;
int main(){
    float pi = 3.14;
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    int radius = r *r;

    cout<<"Area of sphere is:"<< 4*pi*radius;
    cout<<" cm sqr";
}