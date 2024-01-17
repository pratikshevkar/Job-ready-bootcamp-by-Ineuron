#include<iostream>
using namespace std;
int add(int, int=0, int=0);

int main() {
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b);
    cout<<endl;
    cout<<"Enter three numbers: ";
    int c;
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a,b,c);
    cout<<endl;
    return 0;
}

int add(int x, int y, int z) {
    return x+y+z;
}