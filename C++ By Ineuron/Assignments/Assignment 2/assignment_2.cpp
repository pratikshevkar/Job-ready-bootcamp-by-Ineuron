/*
1. Define a function to check whether a given number is a Prime number or not.
*/

// #include<iostream>
// using namespace std;
// void primeCheck(int a);
// int main() {
//     int a;
//     cout<<"Enter a number:- ";
//     cin>>a;
//     primeCheck(a);

//     return 0;
// }
// void primeCheck(int a) {
//     int i, flag;
//     for(i= 2; i<a-1; i++) {
//         if(a%i == 0) {
//             flag = 0;
//         }
//     }
//     if(flag == 0) {
//         cout<<"Given number isn't prime";
//     } else {
//         cout<<"Given number is prime";
//     }
// }

/*
2. Define a function to find the highest value digit in a given number.
*/

// #include<iostream>
// using namespace std;
// int high( int num);
// int main() {
//     int num, maxValue;
//     cout<<"Enter a number";
//     cin>>num;
//     maxValue = high(num);
//     cout<<"Higest digit in given number is "<<maxValue;
//     return 0;
// }

// int high( int num){
//     int remainder, remainder2, max = 0;

//     while(num != 0 ) {
//          remainder = num%10;
//          if (max < remainder ) {
//             max = remainder;
//          }

//               num = num/10;
//     }
// return max;
// }

/*
3. Define a function to calculate x raised to the power y.
*/

// #include<iostream>
// using namespace std;
// int powerCalc(int, int);
// int main() {
//     int x,y, raise;
//     cout<<"Enter x and y value:- ";
//     cin>>x>>y;
//     raise = powerCalc(x, y);
//     cout<<x<<" raise to "<<y<<" is "<<raise;

//     return 0;
// }

// int powerCalc(int x, int y) {
//     int i = 0, pow = 1;
//     while(i != y) {
//         pow = pow*x;
//         i++;
//     }
//     return pow;
// }

/*
4. Define a function to print Pascal Triangle up to N lines.
*/
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n:- ";
//     cin>>n;
// }

/*
6. Define a function to swap data of two int variables using call by reference
*/
// #include<iostream>
// using namespace std;
// void swap(int&, int&);
// int main() {
//     int a=10, b=20;
//     cout<<"a = "<<a<<" b = "<<b<<" brfore swapping"<<endl;
//     swap(a,b);
//     cout<<"a = "<<a<<" b = "<<b<<" after swapping";
    
//     return 0;
// }
// void swap(int &a, int &b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp; 
// }

/*
7. Write a function using the default argument that is able to add 2 or 3 numbers.
*/
// #include<iostream>
// using namespace std;
// int add(int, int, int=0);
// int main() {
//     int a,b,c;
//     cout<<"Enter two numbers:- ";
//     cin>>a>>b;
//     cout<<add(a,b);
//     cout<<endl;
//     cout<<"Enter three numbers:- ";
//     cin>>a>>b>>c;
//     cout<<add(a,b,c);

// }
// int add(int a, int b, int c) {
//     return a+b+c;
// }