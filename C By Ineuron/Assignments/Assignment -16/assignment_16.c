/*
1. Write a program to calculate the sum of two matrices each of order 3x3.
*/
// #include<stdio.h>
// int main() {
//     int a[30][30],b[30][30],c[30][30],i,j,row,column;
//     printf("Enter number of rows and colums:-\n");
//     scanf("%d %d",&row,&column);
//     printf("enter element in 1st matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//       printf("enter element in 2st matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&b[i][j]);
//         }
//     }

//       for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("Sum of two array is:-\n");
//       for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
2. Write a program to calculate the product of two matrices each of order 3x3. ans by sir
*/

// #include<stdio.h>
// int main() {
//     int a[30][30],b[30][30],c[30][30],i,j,row,column,ans=0, k;
//     printf("Enter number of rows and colums:-\n");
//     scanf("%d %d",&row,&column);
//     printf("enter element in 1st matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//       printf("enter element in 2st matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&b[i][j]);
//         }
//     }

//    for(i=0;i<row;i++) {
//     for(j=0;j<column;j++) {
//         for(k=0; k<3; k++) {
//             ans = ans + (a[i][k]*b[k][j]);
//         }
//         c[i][j] = ans;
//         ans = 0;
//     }
//    }
 
//     printf("Multiplication of two matrix is:-\n");
//       for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
3. Write a program in C to find the transpose of a given matrix.
*/

// #include<stdio.h>
// int main() {
//     int a[30][30],i,j,row,column;
//     printf("Enter number of rows and colums:-\n");
//     scanf("%d %d",&row,&column);
//     printf("enter element in matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     printf("Transposed array is:-\n");

//    for(i=0;i<row;i++) {
//     for(j=0;j<column;j++) {
//         printf("%d ", a[j][i] );
//     }
//     printf("\n");
//    }

//     return 0;
// }

/*
4. Write a program in C to find the sum of right diagonals of a matrix.
*/

// #include<stdio.h>
// int main() {
//     int a[30][30],i,j,row,column,ans=0,p;
//     printf("Enter number of rows and colums:-\n");
//     scanf("%d %d",&row,&column);
//     printf("enter element in matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     p = row;

//     printf("Sum of right diagonal is:-\n");

//    for(i=0;i<row;i++) {
//     for(j=0;j<column;j++) {
//         if(j == (p-1)) {
//             ans= a[i][j] + ans;
//                   p--;
//         }
  
//     }
//    }

//    printf("Sum is %d", ans);

//     return 0;
// }



/*
5. Write a program in C to find the sum of left diagonals of a matrix.
*/
// #include<stdio.h>
// int main() {
//     int a[30][30],i,j,row,column,ans=0;
//     printf("Enter number of rows and colums:-\n");
//     scanf("%d %d",&row,&column);
//     printf("enter element in matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     printf("Sum of left diagonal is:-\n");

//    for(i=0;i<row;i++) {
//     for(j=0;j<column;j++) {
//         if(i==j) {
//             ans= a[i][j] + ans;
//         }
//     }
//    }

//    printf("Sum is %d", ans);

//     return 0;
// }

/*
6. Write a program in C to find the sum of rows and columns of a Matrix.
*/

// #include<stdio.h>
// int main() {
//     int a[30][30],i,j,row,column,ans=0,ans2=0;
//     printf("Enter number of rows and colums:-\n");
//     scanf("%d %d",&row,&column);
//     printf("enter element in matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     printf("Sum of rows is:-");

//    for(i=0;i<row;i++) {
//     for(j=0;j<column;j++) {
//      ans= ans + a[i][j];
//     }
//    }
//    printf("%d\n", ans);
//    printf("Sum of column is:-");

//       for(j=0;j<row;j++) {
//     for(i=0;i<column;i++) {
//      ans2= ans2 + a[i][j];
//     }
//    }

//    printf("%d", ans2);

//     return 0;
// }

/*
7. Write a program in C to print or display the lower triangular of a given matrix.
*/

// #include<stdio.h>
// int main() {
//     int a[30][30],d[30][30],i,j,row,column,p=0;
//     printf("Enter number of rows and colums:-\n");
//     scanf("%d %d",&row,&column);
//     printf("enter element in matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//    printf("lower tragular matrix is:-\n");

//       for(j=0;j<row;j++) {
//     for(i=0;i<column;i++) {
//         if(i>=p) {
//             d[i][j] = a[i][j];
//         }
//     }
//      p++;
//    }
//    for(i=0;i<row;i++) {
//     for(j=0;j<column;j++) {
//         printf("%d ",d[i][j]);
//     }
//     printf("\n");
//    }
   

//     return 0;
// }
 
/*
8. Write a program in C to print or display an upper triangular matrix. 
*/

// #include<stdio.h>
// int main() {
//     int a[30][30],d[30][30],i,j,row,column,p=0;
//     printf("Enter number of rows and colums:-\n");
//     scanf("%d %d",&row,&column);
//     printf("enter element in matrix:-\n");
//     for(i=0;i<row;i++) {
//         for(j=0;j<column;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//    printf("lower tragular matrix is:-\n");

//       for(j=0;j<row;j++) {
//     for(i=0;i<column;i++) {
//         if(i<=p) {
//             d[i][j] = a[i][j];
//         }
//     }
//      p++;
//    }
//    for(i=0;i<row;i++) {
//     for(j=0;j<column;j++) {
//         printf("%d ",d[i][j]);
//     }
//     printf("\n");
//    }
   

//     return 0;
// }

/*
9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
*/

// #include<stdio.h>

// int main() {
//     int i,j,rows,columns,arr1[30][30],nonelements=0,zeroelements=0;
//     printf("How many rows and columns:- ");
//     scanf("%d %d",&rows, &columns);

//     printf("Enter element in matrix:-\n");
//     for(i=0;i<rows;i++) {
//         for(j=0;j<columns;j++) {
//             scanf("%d",&arr1[i][j]);
//         }
//     }

//     for(i=0;i<rows;i++) {
//         for(j=0;j<columns; j++) {
//             if(arr1[i][j] > 0) {
//                 nonelements++;

//             } else if (arr1[i][j] <=0) {
//                 zeroelements++;
//             }
//         }
//     }

//     if(nonelements>zeroelements) {
//         printf("Not a spares matrix");
//     } else {
//         printf("Spares matrix");
//     }

// return 0;
// }

/*
10. Write a program in C to find the row with maximum number of 1s.
*/

#include<stdio.h>
int main() {
    int i,j,rows,columns,arr1[30][30], sum = 0,max=0, index;
    printf("How many rows and columns:- ");
    scanf("%d %d",&rows, &columns);

    printf("Enter element in matrix:-\n");
    for(i=0;i<rows;i++) {
        for(j=0;j<columns;j++) {
            scanf("%d",&arr1[i][j]);
        }
    }

     for(i=0;i<rows;i++) {
        for(j=0;j<columns;j++) {
            if(arr1[i][j]==1) {
                sum = arr1[i][j]+sum;
            }
            if(sum>max) {
                max = sum;
                index = i;
            }
        }

    }

    printf("row number %d",i);

return 0;
}
