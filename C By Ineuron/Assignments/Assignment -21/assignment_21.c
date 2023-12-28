/*
1. Define a structure Employee with member variables id, name, salary
*/

// #include<stdio.h>
// int main() {
//     struct employee {
//         int id;
//         char name[10];
//         float salary;
//     };
// }

/*
2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ]
*/

// #include<stdio.h>
// struct employee input();
//    struct employee {
//          int id;
//         char name[10];
//         float salary;
//     };

// int main() {
//    struct employee e2;
//     e2 = input();

//     return 0;
// }
// struct employee input() {
//     struct employee e1;

//     printf("Enter id, name & salary of emplyoee:-\n");
//     scanf("%d", &e1.id);
//     fflush(stdin);
//     fgets(e1.name ,10, stdin);
//     scanf("%f",&e1.salary);

//     return e1;
// }

/*
3. Write a function to display employee data. [ Refer structure from question 1 ]
*/

// #include<stdio.h>
// struct employee input();
// void display(struct employee e2);
//    struct employee {
//          int id;
//         char name[10];
//         float salary;
//     };

// int main() {
//    struct employee e2;
//     e2 = input();
//     display(e2);
    

//     return 0;
// }

// void display(struct employee e2) {

//     printf("\n%d %s %f", e2.id, e2.name, e2.salary);
// }

// struct employee input() {
//     struct employee e1;

//     printf("Enter id, name & salary of emplyoee:-\n");
//     scanf("%d", &e1.id);
//     fflush(stdin);
//     fgets(e1.name ,10, stdin);
//     scanf("%f",&e1.salary);

//     return e1;
// }

/*
4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]
*/
// #include<stdio.h>
//  struct employee {
//         int id;
//         char name[10];
//         float salary;
//     };
//     float maxsal(struct employee arr[]);
// int main() {
//    struct employee arr[10];
//    int i;
//    float max;
//     for(i=0; i<3; i++) {
//     printf("Enter id, name & salary of  emplyoee no %d:-\n",(i+1));
//     scanf("%d", &arr[i].id);
//     fflush(stdin);
//     fgets(arr[i].name ,10, stdin);
//     scanf("%f",&arr[i].salary);
//     }
//     max = maxsal(arr);
//     printf("Max salary of employee is %f", max);

//    return 0;  
// }

// float maxsal(struct employee arr[]) {
//     int i;
//     float max;
//        max = arr[0].salary;
//     for(i=0; i<3; i++) {
//         if(max < arr[i].salary) {
//             max = arr[i].salary;
//         }
//     }

//     return max;
// }

/*
5. Write a function to sort employees according to their salaries [ refer structure from
question 1]
*/
// #include<stdio.h>
// struct employee {
//         int id;
//         char name[10];
//         float salary;
// };
// void sort(struct employee arr[]);
// int main() {
//     struct employee arr[3] = {{1,"sed",100},  {3,"ved",500},  {4,"hed",800}};
//     sort(arr);

// } 
// void sort(struct employee arr[]) {
//     int i,j;
//     struct employee temp;

//     for(i=0; i<3; i++) {
//         for(j=i+1; j<3; j++) {
//             if(arr[i].salary < arr[j].salary) {
//                temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//              }
//         }
//     }

//     for(i=0; i<3; i++) {
//         printf("%d %s %f \n", arr[i].id, arr[i].name, arr[i].salary);
//     }
// } 

/*
6. Write a function to sort employees according to their names [refer structure from
question 1]
*/
// #include<stdio.h>
// #include<string.h>
// struct employee {
//         int id;
//         char name[10];
//         float salary;
// };
// void sort(struct employee arr[]);
// int main() {
//     struct employee arr[3] = {{1,"sed",100},  {3,"ved",500},  {4,"hed",800}};
//     sort(arr);

// } 
// void sort(struct employee arr[]) {
//     int i,j;
//     char t[20];

//     for(i=0; i<2;i++) {
//         for(j=i+1; j<3; j++) {
//             if(strcmp(arr[i].name,arr[j].name) > 0) {
//                 strcpy(t, arr[i].name);
//                 strcpy(arr[i].name,arr[j].name);
//                 strcpy(arr[j].name,t);
//             }
//         }
//     }

//     for(i=0; i<3; i++) {
//         printf("%d %s %f \n", arr[i].id, arr[i].name, arr[i].salary);
//     }
// } 


/*
7. Write a program to calculate the difference between two time periods.
ans by sir
*/
// #include<stdio.h>
// struct time {
//     int sec;
//     int min;
//     int hrs;
// };
// void diff_between_time(struct time t1, struct time t2, struct time *diff);
// int main() {
//     struct time start_time, stop_time, diff;

//     printf("Enter start time\n");
//     printf("Enter hours, minutes and second");
//     scanf("%d %d %d",&start_time.hrs, &start_time.min, &start_time.sec);

//     printf("Enter stop time\n");
//     printf("Enter hours, minutes and second");
//     scanf("%d %d %d",&stop_time.hrs, &stop_time.min, &stop_time.sec);

//     diff_between_time(start_time, stop_time, &diff);

//     printf("\n time Diff: %d:%d:%d - ", start_time.hrs, start_time.min, start_time.sec);
//     printf("%d:%d:%d", stop_time.hrs, stop_time.min, stop_time.sec);
//     printf("= %d:%d:%d\n", diff.hrs, diff.min, diff.sec);

//     return 0;
// }

// void diff_between_time(struct time start, struct time stop, struct time *diff) {
//     while (stop.sec > start.sec ) {
//         --start.min;
//         start.sec +=60;
//     }
//     diff->sec = start.sec - stop.sec;
//     while (stop.min > start.min) {
//         --start.hrs;
//         start.min +=60;
//     }
//     diff->min = start.min - stop.min;
//     diff->hrs = start.hrs - stop.hrs;
// }

/*
8. Write a program to store information of 10 students and display them using structure.
*/
// #include<stdio.h>
// struct students {
//     int roll_no;
//     char name[10];
//     int age;
// };

// int main() {
//    struct students arr[10];
//    int i;

//    for(i=0; i<2; i++) {
//       printf("Enter roll number, name and age of student %d\n", (i+1));
//        scanf("%d", &arr[i].roll_no);
//        fflush(stdin);
//        fgets(arr[i].name, 10,stdin);
//        scanf("%d", &arr[i].age);
//    }

//     for(i=0; i<2; i++) {
//         printf("%d %s %d\n", arr[i].roll_no, arr[i].name, arr[i].age);
//    }

//  return 0;
// }

/*
9. Write a program to store information of n students and display them using structure
*/
// #include<stdio.h>
// struct student {
//     int roll_no;
//     char name[10];
//     int class;
// };

// int main() {
//      int i, n;
//      printf("How many student:- ");
//      scanf("%d",&n);
//     struct student stu[n];
   

//     for(i=0; i<n; i++) {
//         printf("Enter roll number, name and class of student no %d\n", (i+1));
//          scanf("%d",&stu[i].roll_no);
//          fflush(stdin);
//          fgets(stu[i].name, 10, stdin);
//          scanf("%d",&stu[i].class);
//     }

//       for(i=0; i<n; i++) {
//          printf("%d %s %d\n",stu[i].roll_no, stu[i].name, stu[i].class);
//     }
   
// return 0;
// }

/*
10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.
*/
// #include<stdio.h>
// int main() {
//     struct marks {
//      int roll_no;
//      char name[10];
//      float chem_marks;
//      float maths_marks;
//      float phy_marks;
//       };

//     struct marks arr[5];
//     int i;
//     float subsum, percentage;
//     for(i=0; i<2; i++) {
//         printf("Enter roll number, name, chem, maths, physics marks\n");
//         scanf("%d", &arr[i].roll_no);
//         fflush(stdin);
//         fgets(arr[i].name, 10, stdin);
//         scanf("%f", &arr[i].chem_marks);
//         scanf("%f", &arr[i].maths_marks);
//         scanf("%f", &arr[i].phy_marks);
//     }
//     for(i=0; i<2; i++) {
//         subsum = arr[i].chem_marks+arr[i].maths_marks+arr[i].phy_marks;
//         percentage = (100*subsum)/300;
//         printf("percentage of roll number %d is %f \n",arr[i].roll_no, percentage);
//     }

//     return 0;
// }