// #include<stdio.h>
// int main() {
//     char ch;
//     printf("Enter the character:- ");
//     scanf("%c",&ch);
//     printf("ASCII value of %c is %d\n",ch,ch);
//     ch--;
//     printf("The previous character is %c\n",ch);
//     ch++;
//     ch++;
//     printf("The next character is %c\n",ch);

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int i=0;
//     while (i<=6)
//     {
//         if(i%2)
//         i=i-3;
//         else
//         i=i+5;
//         printf("%d",i);
//     }
//     printf("%d",i);

//     return 0;

// }

// #include<stdio.h>
// int main() {
//     int m;
//     printf("Enter your percentage:- ");
//     scanf("%d",&m);

//     if(m>=75) {
//         printf("Distinction");
//     }
//     else if (m>=60 && m<75) {
//         printf("First Class");
//     }
//     else if (m>=50 && m<60) {
//         printf("Second Class:- ");
//     }
//     else if(m>=35 && m<50) {
//         printf("Pass");
//     }
//     else {
//         printf("Fail");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int a;
//     printf("Enter amount:- ");
//     scanf("%d",&a);

//     if(a<250000) {
//         printf("Nill");
//     }
//     else if (a>=250000 && a<500000) {
//         printf("tax rate is 5%%");
//     }
//     else if (a>=500000 && a<1000000) {
//         printf("tax rate is 20%%");
//     }
//     else {
//         printf("tax rate is 30%%");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int a,b;
//     char choice;
//     printf("Select your choice:- \n");
//     printf("+ Addition\n");
//     printf("- Substraction\n");
//     printf("* Multiplication\n");
//     printf("/ Division\n");
//     printf(". Exit\n");
//     scanf("%c",&choice);

//     if(choice =='.') {
//         goto a;
//     }

//     printf("Enter two numbers:- ");
//     scanf("%d%d",&a,&b);

//     switch(choice) {
//         case '+':
//         printf("Sum is %d",a+b);
//         break;

//         case '-':
//         printf("Diffrence is %d",a-b);
//         break;

//         case '*':
//         printf("Multiplication is %d",a*b);
//         break;

//         case '/':
//         printf("Division is %d",a/b);
//         break;

//         case '.':
//         break;

//         default:
//         printf("Wrong choice enter");
//     }

//     a:
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number:- ");
//     scanf("%d",&n);

//     switch(n) {
//         case 1:
//         printf("One");
//         break;

//         case 2:
//         printf("Two");
//         break;

//         case 3:
//         printf("Three");
//         break;

//         case 4:
//         printf("Four");
//         break;

//         case 5:
//         printf("Five");
//         break;

//         case 6:
//         printf("Six");
//         break;

//         case 7:
//         printf("Seven");
//         break;

//         case 8:
//         printf("Eight");
//         break;

//         case 9:
//         printf("Nine");
//         break;

//         default:
//         printf("Wrong choice");
//         break;
//     }
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int x=5,y;
//     y= x++;
//     printf("%d %d", x, y);

// return 0;
// }

// #include<stdio.h>

// int main() {
//     int a=1,x;
//     x= --a + a--;
//     printf("%d", x);

// return 0;
// }

// #include <stdio.h>

// int main() {
//     int b,a=1;
//     b = a-- + --a;
//     printf("%d", b);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 100, x;
//     int temp1 = a++; // Post-increment a and store its original value in temp1
//     int temp2 = ++a; // Pre-increment a and store its new value in temp2
//     x = temp1 + temp2;
//     printf("%d", x);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int b=2,a;
//     a=b++;
//     printf("%d %d", a,b);

//     return 0;
// }

// #include<stdio.h>
// void add();
// int main() {
//     add();
//     return 0;
// }

// void add() {
//     int a,b,c;
//     printf("Enter two numbers:- ");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     printf("Sum is %d",c);
// }

// #include<stdio.h>
// int main(){
//     float sal,tax;
//     printf("enter salary");
//     scanf("%f",&sal);
//     if(sal<=150000){
//         tax=0;
//     }
//         else if (sal>150000 && sal<=300000)
//         {
//             tax=(sal*20)/100;
//         } else if (sal>300000) {
//             tax=(sal*30)/100;
//         }
//         printf("salary=%d",tax);

//      return 0;
//     }

// #include<stdio.h>
// int main() {
//     float p,c,t;
//     printf("Enter temp in faranhiet:- ");
//     scanf("%f",&p);
//     t=5/9;
//     printf("%f %f",p,t);
//     c=t*(p-32);
//     printf("temp in celcious %f",c);

//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a year:- ");
//     scanf("%d", &year);
//     if (year%4)
//     {
//         printf("not Leap year ");
//     }
//     else if (year%100)
//     {
//         printf("Leap year ");

//     }
//     else if(year%400)
//     {
//         printf("not Leap year ");
//     } else{
//         printf("Leap year ");

//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, c = 0;

//     for (i = 2; i <= 100; i++)
//     {
//         for (j = 1; j <= 100; j++)
//         {
//             if (i % j == 0)
//             {
//                 c++;
//             }
//         }
//         if (c == 2)
//         {
//             printf("%d ", i);
//         }
//         c = 0;
//     }

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int r1,c1,a[50],i,b[50],c[50];
//     printf("enter row and colums of matrics number:- ");
//     scanf("%d %d",&r1,&c1);
    
//     printf("Enter 1st array elements:- ");
//     for(i=0;i<r1*c1;i++) {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter 2st array elements:- ");
//     for(i=0;i<r1*c1;i++) {
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<r1*c1;i++) {
//         c[i]=a[i]+b[i];
//         printf("%d ",&c[i]);
        
//     }
    
    
// }

// #include<stdio.h>
// int main() {
//     int i;
//     for(i=0;i<5;i++) {
//         // if(i==1) {
//         //     continue;
//         // }
//         printf("%d",i);
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main() {
//     int n,c=0,nn,rem=0,t,ans=0;
//     printf("Enter a number:- ");
//     scanf("%d",&n);
//     nn=n;
//     t=n;
//      while(n!=0) {
//     n=n/10;
//     c++;
//    }
//     while(nn!=0) {
//         rem=nn%10;
//         ans=ans+pow(rem,c);
//         nn=nn/10;
//     }  
//     if(ans==t) {
//         printf("Given number is amstrong");
//     } else {
//         printf("Given number is not amstrong");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int a[10],n,i,max,min;
//     printf("How many no you wanna add in array:- ");
//     scanf("%d",&n);

//     printf("Enter element in array:- \n");

//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }

//     max=min=a[0];
//     for(i=0;i<n;i++) {
//         if (max<a[i]) {
//             max= a[i];
//         }
//          if (min>a[i]) {
//             min= a[i];
//         }
//     }
//     printf("Max element in array is:- %d\n",max);
//     printf("Max element in array is:- %d",min);

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int a[10],n,i,j,temp;
//     printf("How many no you wanna add in array:- ");
//     scanf("%d",&n);

//     printf("Enter element in array:- \n");

//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<n;i++) {
//         for(j=i+1;j<n;j++) {
//             if(a[i]<a[j]) {
//                 temp=a[i];
//                 a[i] = a[j];
//                 a[j]=temp;
//             }

//         }
//     }
//     for(i=0;i<n;i++) {
//         printf("%d",a[i]);
//     }
// return 0;
// }

// #include<stdio.h>
// int main() {
//     int a[10] [10],r,c,i,j,b[10][10];
//     printf("How many row and column:- ");
//     scanf("%d %d",&r,&c);

//     printf("Enter element in 1st array:- \n");

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//         printf("Enter element in 1st array:- \n");

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++) {
//             scanf("%d",&b[i][j]);
//         }
        
//     }
//          printf("Enter element in 1st array:- \n");

//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++) {
//             scanf("%d",&b[i][j]);
//         }
        
//     }

//        for(i=0;i<r;i++){
//         for(j=0;j<c;j++) {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int a[30],elem,i,key;
//     printf("How many element in array:- \n");
//     scanf("%d",&elem);
//     printf("Enter elements in array\n");
//     for(i=0;i<elem;i++) {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter a key:- ");
//     scanf("%d",&key);

//       for(i=0;i<elem;i++) {
//         if(a[i] == key) {
//             printf("Key found");
//             break;
//         } else if (i==(elem-1)) {
//             printf("Key not found");
//         }
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int i,n;
//     printf("how many:-\n");
//     scanf("%d",n);
//     int a[n];
//     printf("Enter element in array:-\n");
//     for(i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
//      for(i=0;i<n;i++) {
//         printf("%d",a[i]);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int a = 15, b=20, *ptr = &a, *ptr1 = &b;
//     printf("ptr-ptr1 %u\n", ptr-ptr1);
//     printf("ptr-ptr1 %u\n", ptr1-ptr);
   
//    return 0;
// }

// #include<stdio.h>
// int main() {
//     int a = 15, *ptr = &a;
//     char ch='A', *ptr1 = &ch;
//     printf("ptr-ptr1 %u\n", ptr-ptr1);
   
//    return 0;
// }

// #include<stdio.h>
// void und(char a[]) {
//     int i=1, j=13;
//     char temp;
//     temp = a[i];
//     a[i] = a[j];
//     a[j] = temp;

// }
// int main() {
//     char a[20] = "Shalini sharma";
//     und(a);
//     printf("%s", a);

// return 0;
// }

// #include<stdio.h>
// int main() {
//     long int a,b;
//     printf("Enter two number:- ");
//     scanf("%d %d",&a, &b);
//     long int *ptr = &a;
//     long int *ptr1 = &b;
//     if(*ptr > *ptr1) {
//         printf("Max %d",*ptr);

//     } else {
//          printf("Max %d",*ptr1);
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int c;
//     c = sizeof(long int);
//     printf("%d",c);

//     return 0;
// }

// #include<stdio.h>
// int *getmax(int*, int*); 
// int main() {
//     int a,b;
//     int *max=NULL;
//     printf("Enter value of a & b");
//     scanf("%d %d",&a, &b);
//     max = getmax(&a, &b);
//     printf("Maximum value is %d",*max);

//     return 0;
// }
// int *getmax(int *m, int *n) {
//     if (*m > *n) {
//         return m;
//     } else {
//         return n;
//     }
    
// }

#include<stdio.h>
char* sum();
int main() {
    char *ptr=NULL;
    ptr = sum();
    printf("%s",ptr);
    return 0;
}

char* sum() {
    return "naruto";
}
