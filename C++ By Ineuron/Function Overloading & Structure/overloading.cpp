#include<iostream>
using namespace std;
float area(int);
int area(int, int);
int main() {
    int r;
    cout<<"Enter radius of circle:- ";
    cin>>r;
    cout<<"Area of circle is "<<area(r);
    cout<<endl;
    int l,b;
    cout<<"Enter length and breadth of rectangle:- ";
    cin>>l>>b;
    cout<<"Area of rectangle is "<<area(l,b)<<endl;
    return 0;
}
float area(int r) {
    return 3.14*r*r;
}

int area(int l, int b) {
    return l*b;
}